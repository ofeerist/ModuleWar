using UI.Toggle;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Ship.Constructor
{
    public class FastEraser : MonoBehaviour
    {
        [SerializeField] private InputAction _eraseHotkey;

        [Space]

        [SerializeField] private ToggleExtended _eraser;
        [SerializeField] private ToggleSelector _selector;

        [Space]

        [SerializeField] private ConstructorRaycaster _raycaster;
        private ToggleExtended _lastToggle;

        private void Start()
        {
            _eraseHotkey.performed += EraseBlock;

            _eraseHotkey.Enable();
        }

        private void EraseBlock(InputAction.CallbackContext context)
        {
            _lastToggle = _selector.ActiveToggle;

            _selector.ActivateToggle(_eraser, true);
            //_raycaster.SelectCell();

            _selector.ActivateToggle(_lastToggle, true);
        }
    }
}
