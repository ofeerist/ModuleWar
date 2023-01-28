using System;
using Ship.Module;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Ship.Constructor.Palette
{
    internal class PaletteToolBox : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
    {
        [SerializeField] private Image _image;

        [Space]

        [SerializeField] private PaletteDragger _dragger;
        [SerializeField] private Transform _parent;

        private RectTransform _rectTransform;
        private RectTransform _instance;

        private ModuleBase _currentModule;
        public ModuleBase CurrentModule 
        { 
            get { return _currentModule; }
            internal set 
            {
                _currentModule = value;

                if (value == null)
                {
                    _image.sprite = null;
                    _image.color = Color.clear;
                    return;
                }

                var image = value.ModuleInfo.PaletteItem.Image;
                _image.sprite = image.sprite;
                _image.color = image.color;

                OnModuleChanged?.Invoke(value);
            }
        }

        private bool _active;
        public bool Active => _active;

        public event Action<ModuleBase> OnModuleChanged;
        public event Action<bool> OnActiveChanged;

        private void Start()
        {
            _rectTransform = GetComponent<RectTransform>();
        }

        public void ToggleValueChanged(bool value)
        {
            _active = value;

            OnActiveChanged?.Invoke(value);
        }

        public void OnBeginDrag(PointerEventData eventData)
        {
            _image.color = Color.clear;

            _instance = Instantiate(
                CurrentModule.ModuleInfo.PaletteItem,
                _parent)
                .GetComponent<RectTransform>();
            _instance.position = _rectTransform.position;
        }

        public void OnDrag(PointerEventData eventData)
        {
            _instance.anchoredPosition += eventData.delta * (new Vector2(1920, 1080) / new Vector2(Screen.width, Screen.height));
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            Destroy(_instance.gameObject);

            _dragger.RaycastResults(eventData, out var results);

            if (_dragger.FindToolBox(results, out var toolBox))
            {
                (CurrentModule, toolBox.CurrentModule) = (toolBox.CurrentModule, CurrentModule);

                return;
            }

            CurrentModule = null;
        }
    }
}
