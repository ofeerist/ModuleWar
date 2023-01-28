using UniRx;
using UnityEngine;



namespace Utility
{
    internal class ParallaxEffect : MonoBehaviour
    {
        [SerializeField] private Transform _camera;
        private Vector2 _startPos;

        [SerializeField] private float _parallaxEffect;

        public void StartParallax(Vector3 center)
        {
            var _transform = transform;
            _startPos = _transform.position;

            Observable.EveryUpdate().Subscribe(x =>
            {
                var distance = (Vector2)(_camera.position - center) * _parallaxEffect;

                _transform.position = _startPos + distance;
            }).AddTo(this);
        }
    }
}
