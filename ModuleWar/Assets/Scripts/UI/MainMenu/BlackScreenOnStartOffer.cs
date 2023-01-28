using System;
using UniRx;
using UnityEngine;

namespace UI.MainMenu
{
    internal class BlackScreenOnStartOffer : MonoBehaviour
    {
        [SerializeField] private Animator _blackScreen;
        [SerializeField] private float _timeOffset;

        private void Start()
        {
            DisposableExtensions.AddTo(Observable.Timer(TimeSpan.FromSeconds(_timeOffset)).Subscribe(x =>
            {
                _blackScreen.SetBool("Off", false);
            }), this);  
        }
    }
}
