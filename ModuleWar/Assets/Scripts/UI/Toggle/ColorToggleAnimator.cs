using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Toggle
{
    public class ColorToggleAnimator : MonoBehaviour
    {
        private readonly CompositeDisposable _compositeDisposable = new();
        private Color _startColor;

        [SerializeField] private Image _image;
        [SerializeField] private Color _targetColor;
        [SerializeField] private float _lerpT;

        private void Start()
        {
            _startColor = _image.color;
            _targetColor = new Color(_targetColor.r, _targetColor.g, _targetColor.b, _startColor.a);
        }

        public void Highlight(bool state)
        {
            _compositeDisposable.Clear();
            var _transform = transform;
            if (state)
            {
                _compositeDisposable.Add(Observable.EveryUpdate().Subscribe(x =>
                {
                    _image.color = Color.Lerp(_image.color, _targetColor, _lerpT * Time.deltaTime);

                    if (Mathf.Abs(_image.color.r - _targetColor.r) <= .01f)
                    {
                        _compositeDisposable.Clear();
                    }
                }));
                return;
            }

            _compositeDisposable.Add(Observable.EveryUpdate().Subscribe(x =>
            {
                _image.color = Color.Lerp(_image.color, _startColor, _lerpT * Time.deltaTime);

                if (Mathf.Abs(_image.color.r - _targetColor.r) <= .01f)
                {
                    _compositeDisposable.Clear();
                }
            }));
        }
    }
}
