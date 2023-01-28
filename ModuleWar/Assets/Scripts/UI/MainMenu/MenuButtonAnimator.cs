using System.Collections.Generic;
using UniRx;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;



namespace UI.MainMenu
{
    internal class MenuButtonAnimator : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        [SerializeField] private Transform _transform;
        [SerializeField] private Vector3 _endPosition;
        [SerializeField] private float _lerpT;
        private Vector3 _startPosition;

        private Vector3 _currentPosition;
        private bool _isActive;

        [Space]

        [SerializeField] private CanvasGroup[] _groups;
        internal List<CanvasGroup> Groups 
        { 
            get 
            { 
                return new List<CanvasGroup>(_groups); 
            }
            set
            {
                _groups = value.ToArray();
            } 
        }
        [SerializeField] private float _minAlpha;
        [SerializeField] private float _groupLerp;
        private float _targetAlpha;

        [Space]

        [SerializeField] private Animator _toggleGraphic;
        [SerializeField] private bool _startOn;

        public UnityEvent OnHover;

        private void Start()
        {
            _startPosition = _transform.localPosition;
            _currentPosition = _startPosition;
            _targetAlpha = 1;

            Observable.EveryUpdate().Subscribe(x =>
            {
                if (!isActiveAndEnabled) return;

                _transform.localPosition = Vector3.Lerp(_transform.localPosition, _currentPosition, _lerpT * Time.deltaTime);

                foreach (var group in _groups)
                    if(group != null)
                        group.alpha = Mathf.Lerp(group.alpha, _targetAlpha, _groupLerp * Time.deltaTime);
            }).AddTo(this);

            if (_toggleGraphic != null)
                Toggle(_startOn);
        }

        public void OnPointerEnter(PointerEventData eventData) => Hover();
        public void OnPointerExit(PointerEventData eventData) => UnHover();

        private void Hover()
        {
            if (_isActive) return;

            _currentPosition = _endPosition;
            _targetAlpha = _minAlpha;

            OnHover?.Invoke();
        }

        private void UnHover()
        {
            if (_isActive) return;

            _targetAlpha = 1;

            _currentPosition = _startPosition;
        }

        public void Toggle(bool state)
        {
            if (_toggleGraphic == null) return;

            if (state)
            {
                Click();

                _toggleGraphic.SetBool("toggled", state);

                return;
            }

            Unclick();

            _toggleGraphic.SetBool("toggled", state);
        }

        public void Click()
        {
            Hover();

            _isActive = true;
        }

        public void Unclick()
        {
            _isActive = false;

            UnHover();
        }
    }
}
