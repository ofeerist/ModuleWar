using System.Collections.Generic;
using Ship.Module;
using UI;
using UnityEngine;
using UnityEngine.Localization;

namespace Ship.Constructor
{
    public class ShipValidator : MonoBehaviour
    {
        [SerializeField] private ConstructorPlacer _placer;

        [Space]

        [SerializeField] private ErrorThrower _thrower;
        [SerializeField] private LocalizedString _invalidShip;

        private static readonly Vector2Int[] _neighbors = new Vector2Int[] { new(-1, 0), new(1, 0), new(0, -1), new(0, 1) };

        private void Start()
        {
            _placer.OnShipChanged += OnShipChanged;
        }

        private void OnShipChanged(Dictionary<Vector2Int, ModuleBase> modules)
        {
            var isValid = ValidateShip();

            if (isValid)
                _thrower.ToTransparent();
            else
                _thrower.ThrowError(_invalidShip.GetLocalizedString());
        }

        public bool ValidateShip()
        {
            return Validate(_placer.Modules);
        }
    
        public static bool Validate(Dictionary<Vector2Int, ModuleBase> ship)
        {
            var connected = new List<ModuleBase>();
            AddNeighbors(ship, connected, new Vector2Int(0, 0));

            foreach (var row in ship)
            {
                var module = row.Value;

                if (connected.Contains(module)) continue;

                return false;
            }

            return true;
        }

        private static void AddNeighbors(Dictionary<Vector2Int, ModuleBase> ship, List<ModuleBase> connected, Vector2Int position)
        {
            connected.Add(ship[position]);

            foreach (var neighbor in _neighbors)
            {
                var npos = position + neighbor;

                if (!ship.ContainsKey(npos)) continue;

                if (connected.Contains(ship[npos])) continue;

                AddNeighbors(ship, connected, npos);
            }
        }
    }
}
