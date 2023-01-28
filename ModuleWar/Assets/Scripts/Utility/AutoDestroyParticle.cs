
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Utility
{
    internal class AutoDestroyParticle : MonoBehaviour
    {
        [SerializeField] private ParticleSystem _particleSystem;

        private void Start()
        {
            _particleSystem.Play();

            Observable.Timer(System.TimeSpan.FromSeconds(_particleSystem.totalTime)).Subscribe(x =>
            {
                Destroy(gameObject);
            }).AddTo(this);
            
        }
    }
}
