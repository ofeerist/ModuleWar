using UniRx;
using UnityEngine;

namespace UI.Toggle
{
    public class ToggleAnimator : MonoBehaviour
    {
        private readonly CompositeDisposable _compositeDisposable = new();
        private Vector3 _startPosition;

        [SerializeField] private Vector3 _offset;
        [SerializeField] private float _lerpT;

        private void Start()
        {
            _startPosition = transform.localPosition;
        }

        public void Highlight(bool state)
        {
            _compositeDisposable.Clear();
            var _transform = transform;
            if (state)
            {
                var endPosition = _startPosition + _offset;
                _compositeDisposable.Add(Observable.EveryUpdate().Subscribe(x =>
                {
                    _transform.localPosition = Vector2.Lerp(_transform.localPosition, endPosition, _lerpT * Time.deltaTime);

                    if (Vector3.Distance(_transform.localPosition, endPosition) <= .01f)
                    {
                        _compositeDisposable.Clear();
                    }
                }));
                return;
            }

            _compositeDisposable.Add(Observable.EveryUpdate().Subscribe(x =>
            {
                _transform.localPosition = Vector2.Lerp(_transform.localPosition, _startPosition, _lerpT * Time.deltaTime);

                if (Vector3.Distance(_transform.localPosition, _startPosition) <= .01f)
                {
                    _compositeDisposable.Clear();
                }
            }));
        }
    }
}
