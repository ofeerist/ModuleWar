using System;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Radar
{
    internal class RadarLight : MonoBehaviour
    {
        [SerializeField] private Transform _light;
        [SerializeField] private float _speed;

        [Space]

        [SerializeField] private float _minScale;
        [SerializeField] private float _maxScale;

        [Space]

        [SerializeField] private AudioSource _source;
        [SerializeField] private float _playDelay;

        public event Action<float> ProgressChanged;

        private void Start()
        {
            var minScale = _minScale * Vector3.one;
            var maxScale = _maxScale * Vector3.one;

            Observable.EveryUpdate().Subscribe(x =>
            {
                _light.localScale = Vector3.MoveTowards(_light.localScale, maxScale, _speed);

                if (_light.localScale == maxScale) 
                {
                    _light.localScale = minScale;

                    _source.PlayDelayed(_playDelay);
                }

                ProgressChanged?.Invoke(((_light.localScale - minScale) / _maxScale).x);
            }).AddTo(this);
        }
    }
}
