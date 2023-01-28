using UnityEngine;
using UnityEngine.InputSystem;

namespace Assets.Scripts.UI.Toggle
{
    internal class HotkeyToggle : MonoBehaviour
    {
        [SerializeField] private UnityEngine.UI.Toggle _toggle;
        [SerializeField] private InputAction _action;

        private void Start()
        {
            _action.performed += (context) =>
            {
                _toggle.isOn = !_toggle.isOn;
            };

            _action.Enable();
        }
    }
}
