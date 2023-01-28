using UniRx;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Assets.Scripts.Utility.Test
{
    internal class TargetOnMouse : MonoBehaviour
    {
        [SerializeField] private Transform _target;

        [Space]

        [SerializeField] private Camera _camera;
        [SerializeField] private InputAction _position;

        private void Start()
        {
            Observable.EveryUpdate().Subscribe(x =>
            {
                var mousePosition = _camera.ScreenToWorldPoint(_position.ReadValue<Vector2>());

                _target.position = mousePosition;
            }).AddTo(this);

            _position.Enable();
        }
    }
}
