using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Save
{
    internal class DeleteAnimator : MonoBehaviour
    {
        private readonly CompositeDisposable _compositeDisposable = new();
        private readonly CompositeDisposable _confirmCompositeDisposable = new();

        private Vector3 _startPosition;
        private Vector3 _confirmEndPosition;
        private Vector3 _endPosition;

        [SerializeField] private Transform _confirmTransform;
        [SerializeField] private Button _deleteButton;

        [SerializeField] private Vector3 _offset;
        [SerializeField] private Vector3 _confirmOffset;
        [SerializeField] private float _lerpT;

        private void Start()
        {
            _startPosition = transform.localPosition;
            _endPosition = _startPosition + _offset;
            _confirmEndPosition = _startPosition + _confirmOffset;
        }

        public void Highlight(bool state)
        {
            _compositeDisposable.Clear();
            Confirm();

            if (state)
            {
                Animate(_compositeDisposable, transform, _endPosition);
                return;
            }

            Animate(_compositeDisposable, transform, _startPosition);
        }

        public void ActivateConfirm()
        {
            _confirmCompositeDisposable.Clear();

            _deleteButton.interactable = false;

            Animate(_confirmCompositeDisposable, _confirmTransform, _confirmEndPosition);
        }

        public void Confirm()
        {
            _confirmCompositeDisposable.Clear();

            _deleteButton.interactable = true;

            Animate(_confirmCompositeDisposable, _confirmTransform, _startPosition);
        }

        private void Animate(CompositeDisposable disposable, Transform _transform, Vector3 position)
        {
            disposable.Add(Observable.EveryUpdate().Subscribe(x =>
            {
                _transform.localPosition = Vector2.Lerp(_transform.localPosition, position, _lerpT * Time.deltaTime);

                if (Vector3.Distance(_transform.localPosition, position) <= .01f)
                {
                    disposable.Clear();
                }
            }));
        }
    }
}
