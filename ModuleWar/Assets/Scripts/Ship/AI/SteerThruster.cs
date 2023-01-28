using Micosmo.SensorToolkit;
using Pathfinding;
using Ship.Module.Thruster;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Ship.AI
{
    internal class SteerThruster : MonoBehaviour
    {
        [SerializeField] private ThrusterApplier _thrusterApplier;
        [SerializeField] private Seeker _seeker;
        public Seeker Seeker => _seeker;
        [SerializeField] private SteeringSensor2D _sensor;
        [SerializeField] private Rigidbody2D _rigidbody;

        [SerializeField] private Transform _target;
        public Transform Target => _target;

        [SerializeField] private float _frequency;
        [SerializeField] private float _damping;

        private readonly SerialDisposable _disposable = new();

        public bool IsDone { get; private set; }
        [SerializeField] private float _doneThreshold;

        private void Start()
        {
            UpdatePath();

            var _transform = transform;
            Observable.EveryUpdate().Subscribe(x =>
            {
                print(Vector3.Distance(_transform.position, Target.position));
                if (Vector3.Distance(_transform.position, Target.position) <= _doneThreshold)
                    IsDone = true;
            }).AddTo(this);

            _disposable.AddTo(this);
        }

        private void UpdatePath()
        {
            IsDone = false;

            _seeker.StartPath(transform.position, _target.position, OnPathComplete, GraphMask.everything);
        }

        public Vector2 PlotTrajectoryAtTime(Vector2 startVelocity, float time)
        {
            return startVelocity * time + 0.5f * time * time * Physics2D.gravity;
        }

        private void OnPathComplete(Path path)
        {
            if (path.error)
            {
                print("net");
            }
            else
            {
                _sensor.Destination = path.vectorPath[1];

                var direction = (path.vectorPath[1] - transform.position).normalized; //+ _sensor.GetSteeringVector()).normalized;

                var kp = (6f * _frequency) * (6f * _frequency) * 0.25f;
                var kd = 4.5f * _frequency * _damping;

                float dt = Time.fixedDeltaTime;
                float g = 1 / (1 + kd * dt + kp * dt * dt);
                float ksg = kp * g;
                float kdg = (kd + kp * dt) * g;
                Vector3 Pt0 = transform.position;
                Vector3 Vt0 = _rigidbody.velocity;
                Vector3 F = (path.vectorPath[1] - Pt0) * ksg + (Vector3.zero - Vt0) * kdg;

                _thrusterApplier.MoveVector = F;
            }

            _disposable.Disposable = Observable.NextFrame().Subscribe(x => UpdatePath());
        }
    }
}
