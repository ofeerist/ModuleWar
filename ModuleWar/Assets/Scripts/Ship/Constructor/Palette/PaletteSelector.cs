using System;
using Ship.Module;
using UniRx;
using UnityEngine;
using UnityEngine.UI;



namespace Ship.Constructor.Palette
{
    internal class PaletteSelector : MonoBehaviour
    {
        [SerializeField] private PaletteToolBox[] _paletteToolBoxes;
        private PaletteToolBox _currentToolBox;

        public PaletteToolBox CurrentToolBox => _currentToolBox;

        public event Action<PaletteToolBox> OnToolBoxSelected;

        [SerializeField] private RectTransform _graphicTransform;

        public ModuleBase Module { get 
            {
                return _currentToolBox.CurrentModule;
            } 
        }

        private void Start()
        {

            foreach (var toolBox in _paletteToolBoxes)
                toolBox.OnActiveChanged += (value) => ActiveChanged(toolBox, value);

            ActiveChanged(_paletteToolBoxes[0], true);

            Observable.NextFrame().Subscribe(x =>
                _paletteToolBoxes[0].GetComponent<Toggle>().isOn = true).AddTo(this);
        }

        private void ActiveChanged(PaletteToolBox toolBox, bool value)
        {
            if (!value) return;

            _graphicTransform.position = toolBox.transform.position;

            _currentToolBox = toolBox;
            OnToolBoxSelected?.Invoke(toolBox);
        }
    }
}
