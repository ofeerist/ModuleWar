using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Utility
{
    internal class CustomDragScrollRect : ScrollRect
    {
        [SerializeField] private float _minSize;
        [SerializeField] private float _maxSize;
        public override void OnBeginDrag(PointerEventData eventData)
        {
            if (eventData.button == PointerEventData.InputButton.Right)
            {
                eventData.button = PointerEventData.InputButton.Left;
                base.OnBeginDrag(eventData);
            }
        }

        public override void OnEndDrag(PointerEventData eventData)
        {
            if (eventData.button == PointerEventData.InputButton.Right)
            {
                eventData.button = PointerEventData.InputButton.Left;
                base.OnEndDrag(eventData);
            }
        }

        public override void OnDrag(PointerEventData eventData)
        {
            if (eventData.button == PointerEventData.InputButton.Right)
            {
                eventData.button = PointerEventData.InputButton.Left;
                base.OnDrag(eventData);
            }
        }

        public override void OnScroll(PointerEventData data)
        {
            var targetScale = content.localScale + data.scrollDelta.y * scrollSensitivity * Vector3.one;
            content.localScale = new Vector3(Mathf.Clamp(targetScale.x, _minSize, _maxSize), 
                Mathf.Clamp(targetScale.y, _minSize, _maxSize),
                targetScale.z);
        }
    }
}
