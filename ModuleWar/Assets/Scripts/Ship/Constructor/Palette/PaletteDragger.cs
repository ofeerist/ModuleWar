using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Ship.Constructor.Palette
{
    internal class PaletteDragger : MonoBehaviour
    {
        [SerializeField] private Transform _parent;
        [SerializeField] private PaletteItem[] _items;
        [SerializeField] private GraphicRaycaster _raycaster;
        [SerializeField] private PaletteSelector _selector;

        public event Action<PaletteItem> OnClicked;

        public void SetItems(PaletteItem[] items)
        {
            _items = items;

            SubscribeToItems();
        }

        private void Start()
        {
            SubscribeToItems();
        }
        private void SubscribeToItems()
        {
            foreach (var item in _items)
            {
                item.SetParent(_parent);

                item.OnClick += (eventData) => OnClick(eventData, item);
                item.EndDrag += (eventData) => OnEndDrag(eventData, item);

                item.OnDoubleClick += (eventData) => OnDoubleClick(eventData, item);
            }
        }

        private void OnClick(PointerEventData eventData, PaletteItem item)
        {
            OnClicked?.Invoke(item);
        }

        private void OnDoubleClick(PointerEventData eventData, PaletteItem item)
        {
            _selector.CurrentToolBox.CurrentModule = item.Module;
        }

        private void OnEndDrag(PointerEventData eventData, PaletteItem item)
        {
            RaycastResults(eventData, out var results);

            if (FindToolBox(results, out var toolBox))
            {
                toolBox.CurrentModule = item.Module;
            }
        }

        public void RaycastResults(PointerEventData eventData, out List<RaycastResult> results)
        {
            results = new List<RaycastResult>();
            _raycaster.Raycast(eventData, results);
        }

        public bool FindToolBox(List<RaycastResult> results, out PaletteToolBox toolBox)
        {
            foreach (RaycastResult result in results)
            {
                if (result.gameObject.TryGetComponent(out toolBox))
                {  
                    return true;
                }
            }

            toolBox = null;
            return false;
        }
    }
}
