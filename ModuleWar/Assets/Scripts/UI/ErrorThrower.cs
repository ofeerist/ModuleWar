using TMPro;
using UniRx;
using UnityEngine;



namespace UI
{
    public class ErrorThrower : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _group;
        [SerializeField] private float _toBlacklerpT;
        [SerializeField] private float _toTransparentlerpT;
        [SerializeField] private float _timeout;
        private float _targetAlpha;
        private bool _black;

        private readonly SerialDisposable _disposable = new();

        private void Start()
        {
            _disposable.AddTo(this);

            Observable.EveryFixedUpdate().Subscribe(x =>
            {
                _group.alpha = Mathf.Lerp(_group.alpha, _targetAlpha, _black ? _toBlacklerpT : _toTransparentlerpT * Time.deltaTime);
            }).AddTo(this);
        }

        public void ToBlack()
        {
            _black = true;
            _targetAlpha = 1f;
        }
        public void ToTransparent()
        {
            _black = false;
            _targetAlpha = 0f;

            _disposable.Disposable?.Dispose();
        }
        public void ThrowError(string error)
        {
            _group.text = error;

            ToBlack();
            _disposable.Disposable = Observable.Timer(System.TimeSpan.FromSeconds(_timeout)).Subscribe(x =>
            {
                ToTransparent();
            });
        }
    }
}
