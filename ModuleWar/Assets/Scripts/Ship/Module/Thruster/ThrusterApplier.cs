using Photon.Pun;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using UnityEngine.InputSystem;



namespace Ship.Module.Thruster
{
    public class ThrusterApplier : MonoBehaviour, IPunObservable
    {
        [SerializeField] private PhotonView _view;

        [SerializeField] private InputAction _moveAction;
        [SerializeField] private Rigidbody2D _rigidbody;
        [SerializeField] private List<ThrusterBase> _thrusters = new();

        [SerializeField] private float _maxSpeed;
        [SerializeField] private AudioSource _source;

        private Vector2 _moveVector;
        public Vector2 MoveVector { get { return _moveVector; } set { _moveVector = value; } }

        public List<ThrusterBase> Thrusters
        {
            set
            {
                _thrusters = value;
            }
            get
            {
                return _thrusters;
            }
        }

        
        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(_moveVector.x);
                stream.SendNext(_moveVector.y);
            }
            else
            {
                var x = (float)stream.ReceiveNext();
                var y = (float)stream.ReceiveNext();
                _moveVector = new Vector2(x, y);
            }
        }

        private void Start()
        {
            var target = 0f;
            Observable.EveryUpdate().Subscribe(x =>
            {
                target = 0.05f + (_rigidbody.velocity.magnitude / _maxSpeed) / 3 
                + (1 - Vector2.Dot(_moveVector.normalized, _rigidbody.velocity.normalized)) / 2;

                _source.volume = Mathf.Lerp(_source.volume, target, 2 * Time.deltaTime);
            }).AddTo(this);

            if (PhotonNetwork.LocalPlayer != _view.Owner) return;

            Observable.EveryFixedUpdate().Subscribe(x =>
            {
                if (_moveAction.bindings.Count > 0)
                    _moveVector = _moveAction.ReadValue<Vector2>();

                if (_moveVector == Vector2.zero) return;

                _moveVector = Vector2.ClampMagnitude(_moveVector, 1f);

                if (_rigidbody.velocity.magnitude > _maxSpeed)
                {
                    _rigidbody.velocity = _rigidbody.velocity.normalized * _maxSpeed;

                    return;
                }

                foreach (var thruster in _thrusters)
                {
                    var param = thruster.ThrusterParameters;

                    _rigidbody.AddForceAtPosition(_moveVector * param.Force, thruster.transform.position);
                }
            }).AddTo(this);

            _moveAction.Enable();
        }
    }
}
