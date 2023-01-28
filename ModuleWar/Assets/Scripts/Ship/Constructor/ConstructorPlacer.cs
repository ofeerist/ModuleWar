using System;
using System.Collections.Generic;
using Assets.Scripts.Ship.Constructor.History;
using Ship.Constructor.Palette;
using Ship.Module;
using Ship.SaveLoad;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace Ship.Constructor
{
    public class ConstructorPlacer : MonoBehaviour
    {
        [SerializeField] private ConstructorField _constructorField;
        [SerializeField] private Transform _moduleParent;

        [Space]

        [SerializeField] private PaletteSelector _paletteSelector;
        [SerializeField] private ConstructorRaycaster _constructorRaycaster;
        [SerializeField] private float _calibrationScale;

        [Space]

        [SerializeField] private ModuleBase _corePrefab;
        [SerializeField] private Toggle _erase; 
        private Dictionary<Vector2Int, ModuleBase> _modules;

        public Dictionary<Vector2Int, ModuleBase> Modules => _modules;

        public event Action<List<Vector2Int>> OnAvailabilityMapChanged;
        public event Action<Dictionary<Vector2Int, ModuleBase>> OnShipChanged;

        private List<Vector2Int> _availabilityMap;

        private readonly UndoRedoStack<ConstructorInput> _undoRedoStack = new();
        public UndoRedoStack<ConstructorInput> UndoRedoStack => _undoRedoStack;
        [SerializeField] private ModuleIDDictionary _dictionary;

        private void Start()
        {
            _modules = new Dictionary<Vector2Int, ModuleBase>();

            var corePosition = new Vector2Int(0, 0);
            InstantiateModule(corePosition, _corePrefab);

            Observable.NextFrame().Subscribe(x => UpdateAvailabilityMap()).AddTo(this);

            _constructorRaycaster.OnCellSelected += (cellPosition) =>
            {
                if (cellPosition == corePosition) return;

                ConstructorInput input;

                if (_erase.isOn)
                {
                    if (_modules.ContainsKey(cellPosition))
                    {
                        input = new ConstructorInput(cellPosition,
                            _dictionary.Database[_modules[cellPosition].ModuleInfo.Id], this);
                        _undoRedoStack.Do(new DestroyCommand(input), input);
                    }

                    return;
                }

                if (_paletteSelector.Module == null) return;

                input = new ConstructorInput(cellPosition, _paletteSelector.Module, this);
                _undoRedoStack.Do(new PlaceCommand(input), input);
            };
        }

        private bool CheckAvailability(Vector2Int position)
        {
            return _availabilityMap.Contains(position);
        }

        public void UpdateAvailabilityMap()
        {
            _availabilityMap = new List<Vector2Int>();

            var max = (int)(_constructorField.Size / 2f);
            var min = -max;

            foreach (var row in _modules)
            {
                var position = row.Key;
                var x = position.x;
                var y = position.y;

                var neighbors = new Vector2Int[] { new(x - 1, y), new(x + 1, y), new(x, y - 1), new(x, y + 1) };
                foreach (var neighbor in neighbors)
                {
                    if (neighbor.x < min || neighbor.x > max || neighbor.y < min || neighbor.y > max) continue;

                    if (_modules.ContainsKey(neighbor)) continue;

                    _availabilityMap.Add(neighbor);
                }
            }

            OnAvailabilityMapChanged?.Invoke(_availabilityMap);
        }

        private void OnDrawGizmos()
        {
            for (int x = -100; x < 100; x++)
            {
                for (int y = -100; y < 100; y++)
                {
                    Gizmos.color = Color.red;
                    Gizmos.DrawWireCube(_constructorRaycaster.KeyPositionToWorld(new Vector2Int(x, y)),
                        -_constructorRaycaster.GetRelativeScale());
                }
            }
        }

        public ModuleBase InstantiateModule(Vector2Int cellPosition, ModuleBase prefab)
        {
            if (_modules.ContainsKey(cellPosition)) DestroyModule(cellPosition);

            var module = Instantiate(prefab, _moduleParent);
            module.transform.localScale = Vector2.one * _calibrationScale;

            module.transform.localPosition = (Vector2)cellPosition * _calibrationScale;

            _modules[cellPosition] = module;

            OnShipChanged?.Invoke(_modules);

            UpdateAvailabilityMap();

            return module;
        }

        public void DestroyModule(Vector2Int cellPosition)
        {
            if (cellPosition == Vector2.zero) return;

            var module = _modules[cellPosition];
            if (module == null) return;

            Destroy(module.gameObject);
            module = null;
            _modules.Remove(cellPosition);

            UpdateAvailabilityMap();

            OnShipChanged?.Invoke(_modules);
        }

        public void Undo()
        {
            UndoRedoStack.Undo(null);
        }

        public void Redo()
        {
            UndoRedoStack.Redo(null);
        }

        public void ClearConstructorField()
        {
            var toDestroy = new List<Vector2Int>();
            foreach (var module in _modules)
                toDestroy.Add(module.Key);

            foreach (var item in toDestroy)
                DestroyModule(item);
        }
    }
}
