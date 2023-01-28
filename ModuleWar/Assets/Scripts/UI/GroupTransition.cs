using UnityEngine;
using UnityEngine.Events;
using UniRx;
using UniRx;

namespace UI
{
    public class GroupTransition : MonoBehaviour
    {
        [SerializeField] private CanvasGroup _group;
        [SerializeField] private float _lerpT;
        private float _targetAlpha;

        [SerializeField] private UnityEvent OnBlack;
        [SerializeField] private UnityEvent OnTransparent;

        private void Start()
        {
            Observable.EveryUpdate().Subscribe(x =>
            {
                _group.alpha = Mathf.Lerp(_group.alpha, _targetAlpha, _lerpT * Time.deltaTime);
            }).AddTo(this);
        }

        public void ToBlack() 
        {
            _targetAlpha = 1f;
            OnBlack?.Invoke();
        }
        public void ToTransparent()
        { 
            _targetAlpha = 0f;
            OnTransparent?.Invoke();
        }
    }
}
