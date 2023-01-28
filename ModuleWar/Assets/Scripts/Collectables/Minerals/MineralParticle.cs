using Arena;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Collectables.Minerals
{
    internal class MineralParticle : MonoBehaviour
    {
        [SerializeField] private Transform _target;
        [SerializeField] private float _speed;
        [SerializeField] private ParticleSystem _particleSystem;

        private void Start()
        {
            var _transform = transform;
            Observable.EveryUpdate().Subscribe(x =>
            {
                _transform.position = Vector3.Lerp(_transform.position, _target.position, _speed * Time.deltaTime);
            }).AddTo(this);
        }

        public void SetParticle(Transform target, Color color)
        {
            _target = target;
            var main = _particleSystem.main;
            main.startColor = color;
        }
    }
}
