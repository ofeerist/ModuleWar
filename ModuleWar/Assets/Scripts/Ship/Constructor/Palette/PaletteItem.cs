using System;
using Ship.Module;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Ship.Constructor.Palette
{
    public class PaletteItem : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler, IPointerClickHandler
    {
        private RectTransform _rectTransform;
        private RectTransform _instance;
        private Transform _parent;

        [SerializeField] private ModuleBase _module;
        public ModuleBase Module => _module;

        [SerializeField] private Image _image;
        public Image Image => _image;

        public event Action<PointerEventData> BeginDrag;
        public event Action<PointerEventData> Drag;
        public event Action<PointerEventData> EndDrag;
        public event Action<PointerEventData> OnClick;
        public event Action<PointerEventData> OnDoubleClick;

        private void Start()
        {
            _rectTransform = GetComponent<RectTransform>();
        }

        public void SetParent(Transform parent)
        {
            _parent = parent;
        }

        public void OnBeginDrag(PointerEventData eventData)
        {
            BeginDrag?.Invoke(eventData);

            _instance = Instantiate(
                _module.ModuleInfo.PaletteItem, 
                _parent)
                .GetComponent<RectTransform>();
            _instance.position = _rectTransform.position;
        }

        public void OnDrag(PointerEventData eventData)
        {
            Drag?.Invoke(eventData);

            _instance.anchoredPosition += eventData.delta * (new Vector2(1920, 1080) / new Vector2(Screen.width, Screen.height));
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            EndDrag?.Invoke(eventData);

            Destroy(_instance.gameObject);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            OnClick?.Invoke(eventData);

            if (eventData.clickCount == 2)
            {
                OnDoubleClick?.Invoke(eventData);
            }
        }
    }
}
