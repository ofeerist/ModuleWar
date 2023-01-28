using System;
using Photon.Pun;
using Ship.Module.HealthInterface;
using UniRx;
using UnityEngine;
using Utility;



namespace Ship.Module.Blaster
{
    [Serializable]
    public class ProjectileParameters
    {
        public Vector3 Position;
        public Quaternion Rotation;
        public float Speed;
        public float Damage;
        public LayerMask LayerMask;
        public Vector3 AdditionalVelocity;
        public BlasterBase ProjectileOwner;
        public DynamicPool<Projectile> Pool;
    }

    public class Projectile : PooledItem
    {
        [SerializeField] private PhotonView _view;

        [SerializeField] private BoxCollider2D _damageCollider;
        [SerializeField] private SpriteRenderer _spriteRenderer;
        [SerializeField] private float _destroyTime;

        [SerializeField] private AudioSource _audioSource;
        [SerializeField] private AudioClip _startClip;
        [SerializeField] private AudioClip _deathClip;

        private float _speed;
        private float _damage;
        private LayerMask _layerMask;
        private Vector3 _additionalVelocity;
        private BlasterBase _projectileOwner;

        private readonly RaycastHit2D[] _results = new RaycastHit2D[1];
        private readonly CompositeDisposable _compositeDisposable = new();

        private ProjectileParameters _parameters;

        public Projectile Create(ProjectileParameters parameters)
        {
            if (parameters.ProjectileOwner.Ship.View.Owner != PhotonNetwork.LocalPlayer) return null;

            //parameters.Pool.NetInstantiate(name, out var projectile, parameters.Position, parameters.Rotation);

            var projectile = PhotonNetwork.Instantiate(name, parameters.Position, parameters.Rotation).GetComponent<Projectile>();

            projectile._speed = parameters.Speed;
            projectile._damage = parameters.Damage;
            projectile._layerMask = parameters.LayerMask;
            projectile._additionalVelocity = parameters.AdditionalVelocity;
            projectile._projectileOwner = parameters.ProjectileOwner;
            projectile._parameters = parameters;

            projectile.Attack();
            
            return projectile;
        }

        private void Attack()
        {
            _compositeDisposable.Add(Observable.Timer(TimeSpan.FromSeconds(_destroyTime)).Subscribe(x =>
            {
                Destroy();
            }));

            var _transform = transform;
            _compositeDisposable.Add(Observable.EveryFixedUpdate().Subscribe(x =>
            {
                _transform.position += (_speed * _transform.up + _additionalVelocity) * Time.fixedDeltaTime;

                var size = Physics2D.BoxCastNonAlloc(_transform.position, _damageCollider.size,
                    _transform.rotation.eulerAngles.y, _transform.forward,
                    _results, Mathf.Infinity, _layerMask);

                if (size == 0) return;


                if (_results[0].collider.gameObject.TryGetComponent<ITakeDamageable>(out var takeDamageable))
                    takeDamageable.TakeDamage(_projectileOwner, ref _damage, _results[0]);

                Destroy();
            }));
        }

        [PunRPC]
        private void PreDestroy()
        {
            _spriteRenderer.color = Color.clear;
            _compositeDisposable.Clear();

            PlayImpact();
        }

        private void Destroy()
        {
            if (_view.Owner != PhotonNetwork.LocalPlayer) return;

            _view.RPC(nameof(PreDestroy), RpcTarget.All);

            Observable.Timer(TimeSpan.FromSeconds(1f)).Subscribe(x =>
            {
                PhotonNetwork.Destroy(_view);
            }).AddTo(this);
            
            //ReturnToPool();
        }

        private void PlayImpact()
        {
            _audioSource.PlayOneShot(_deathClip, 2f);
        }
    }
}
