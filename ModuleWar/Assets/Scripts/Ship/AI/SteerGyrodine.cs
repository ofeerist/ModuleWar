using Micosmo.SensorToolkit;
using Ship.Module.Gyrodine;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Ship.AI
{
    internal class SteerGyrodine : MonoBehaviour
    {
        [SerializeField] private GyrodineApplier _gyrodineApplier;
        [SerializeField] private SteeringSensor2D _sensor;

        [SerializeField] private Rigidbody2D _rigidbody;

        [SerializeField] private float _frequency;
        [SerializeField] private float _damping;

        private void Start()
        {
            Observable.EveryUpdate().Subscribe(ctx =>
            {
                _gyrodineApplier.RotationVector = _rigidbody.velocity;
            }).AddTo(this);
        }
    }
}
