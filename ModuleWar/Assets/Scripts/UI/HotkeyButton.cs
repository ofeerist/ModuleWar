using UnityEngine;
using UnityEngine.InputSystem;

namespace Assets.Scripts.UI.Toggle
{
    internal class HotkeyButton : MonoBehaviour
    {
        [SerializeField] private UnityEngine.UI.Button _button;
        [SerializeField] private InputAction _action;

        private void Start()
        {
            _action.performed += (context) =>
            {
                if (!isActiveAndEnabled) return;

                _button.onClick.Invoke();
            };

            _action.Enable();
        }
    }
}
