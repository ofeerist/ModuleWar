using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace Ship.Constructor
{
    internal class ConstructorRaycaster : MonoBehaviour
    {
        [SerializeField] private ConstructorField _constructorField;
        [SerializeField] private Vector2Int _center;

        [Space]

        [SerializeField] private RectTransform _content;
        [SerializeField] private float _calibrationScale;

        [Space]

        [SerializeField] private InputAction _selectAction;
        [SerializeField] private InputAction _positionAction;
        [SerializeField] private Camera _camera;
        [SerializeField] private Transform _fieldTransform;

        [Space]

        [SerializeField] private GraphicRaycaster _raycaster;
        [SerializeField] private GameObject _uiMask;

        public event Action<Vector2Int> OnCellSelected;

        private void Start()
        {
            _selectAction.performed += (context) =>
            {
                var mousePosition = _camera.ScreenToWorldPoint(_positionAction.ReadValue<Vector2>());
                var rectPosition = new Vector3(_content.anchoredPosition.x, _content.anchoredPosition.y, 0) / 100;
                var relativePosition = rectPosition - mousePosition - _fieldTransform.localPosition;

                relativePosition /= GetRelativeScale().x;

                var cellPosition = new Vector2Int(
                    Mathf.RoundToInt(relativePosition.x),
                    Mathf.RoundToInt(relativePosition.y))
                    - _center;

                if (!CheckUIBlock()) return;

                SelectCell(cellPosition);
            };

            _selectAction.Enable();
            _positionAction.Enable();  
        }

        private bool CheckUIBlock()
        {
            var results = new List<RaycastResult>();
            var eventData = new PointerEventData(EventSystem.current)
            {
                position = _positionAction.ReadValue<Vector2>()
            };

            _raycaster.Raycast(eventData, results);

            foreach (RaycastResult result in results)
            {
                return result.gameObject == _uiMask;
            }

            return true;
        }

        public Vector2 KeyPositionToWorld(Vector2Int keyPosition)
        {
            var scale = GetRelativeScale();
            return new Vector2(keyPosition.x, keyPosition.y) * scale;
        }

        public Vector3 GetRelativeScale()
        {
            return _content.localScale * _calibrationScale;
            //return Vector3.one * _calibrationScale;
        }

        private void OnDrawGizmos()
        {
            for (int x = -100; x < 100; x++)
            {
                for (int y = -100; y < 100; y++)
                {
                    Gizmos.color = Color.blue;
                    Gizmos.DrawWireCube(KeyPositionToWorld(new Vector2Int(x, y)), -GetRelativeScale());
                }
            }
        }

        private static Vector3 Invert(Vector3 vec)
        {
            return new Vector3(1 / vec.x, 1 / vec.y, 1 / vec.z);
        }

        public void SelectCell(Vector2Int cellPosition)
        {
            var size = _constructorField.Size;
            var halfSize = Mathf.FloorToInt(size / 2);

            if (cellPosition.x < -halfSize || cellPosition.x > halfSize 
                || cellPosition.y < -halfSize || cellPosition.y > halfSize)
                return;

            OnCellSelected?.Invoke(cellPosition);
        }
    }
}
