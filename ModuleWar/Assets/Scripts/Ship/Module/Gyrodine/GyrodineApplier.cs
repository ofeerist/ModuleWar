using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UniRx;
using Photon.Pun;

namespace Ship.Module.Gyrodine
{
    public class GyrodineApplier : MonoBehaviour
    {
        [SerializeField] private PhotonView _view;

        [SerializeField] private Rigidbody2D _rb;
        [SerializeField] private Camera _camera;
        [SerializeField] private InputAction _mouseAction;

        public Camera Camera { get => _camera; set => _camera = value; }

        [Space]

        [SerializeField] private List<GyrodineBase> _gyrodines = new();

        private Vector2 _rotationVector;
        public Vector2 RotationVector { get { return _rotationVector; } set { _rotationVector = value; } }

        public List<GyrodineBase> Gyrodines
        {
            set
            {
                _gyrodines = value;
            }
            get
            {
                return _gyrodines;
            }
        }
        private void Start()
        {
            if (PhotonNetwork.LocalPlayer != _view.Owner) return;

            var _transform = transform;

            Observable.EveryFixedUpdate().Subscribe(x =>
            {
                if (_mouseAction.bindings.Count > 0)
                {
                    var mousePosition = _camera.ScreenToWorldPoint(_mouseAction.ReadValue<Vector2>());
                    _rotationVector = (mousePosition - _transform.position).normalized;
                }

                var torque = 0f;

                for (int i = 0; i < _gyrodines.Count; i++)
                {
                    var gyrodine = _gyrodines[i];
                    var param = gyrodine.Parameters;

                    torque = param.MaxTorque;
                }

                Rotate(Quaternion.LookRotation(Vector3.forward, _rotationVector), torque);
            }).AddTo(this);

            _mouseAction.Enable();
        }

        private void Rotate(Quaternion targetOrientation, float maxTorque)
        {
            // Compute the change in orientation we need to impart.
            Quaternion rotationChange = targetOrientation * Quaternion.Inverse(Quaternion.AngleAxis(_rb.rotation, Vector3.forward));

            // Convert to an angle-axis representation, with angle in range -180...180
            rotationChange.ToAngleAxis(out float angle, out Vector3 axis);
            if (angle > 180f)
                angle -= 360f;

            // If we're already facing the right way, just stop.
            // This avoids problems with the infinite axes ToAngleAxis gives us in this case.
            if (Mathf.Approximately(angle, 0))
            {
                _rb.angularVelocity = 0;
                return;
            }

            // If you need to, you can enforce a cap here on the maximum rotation you'll
            // allow in a single step, to prevent overly jerky movement from upsetting your sim.
            // angle = Mathf.Clamp(angle, -90f, 90f);

            // Convert to radians.
            angle *= Mathf.Deg2Rad;

            // Compute an angular velocity that will bring us to the target orientation
            // in a single time step.
            var targetAngularVelocity = axis * angle / Time.deltaTime;

            // You can reduce this parameter to smooth the movement over multiple time steps,
            // to help reduce the effect of sudden jerks.
            float catchUp = 1.0f;
            targetAngularVelocity *= catchUp;

            var torque = (targetAngularVelocity - new Vector3(0, 0, _rb.angularVelocity)).z;
            torque = Mathf.Clamp(torque, -maxTorque, maxTorque);

            // Apply a torque to finish the job.
            _rb.AddTorque(torque);
        }
    }
}
