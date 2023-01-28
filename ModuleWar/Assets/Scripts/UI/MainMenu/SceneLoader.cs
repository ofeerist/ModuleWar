using System;
using UniRx;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace UI.MainMenu
{
    internal class SceneLoader : MonoBehaviour
    {
        [SerializeField] private string _scene;
        [SerializeField] private float _timeOffset;
        [SerializeField] private Animator[] _animators;

        public UnityEvent OnSceneLoad;

        public void Load()
        {
            foreach (var animator in _animators)
                animator.SetBool("Off", true);

            DisposableExtensions.AddTo(Observable.Timer(TimeSpan.FromSeconds(_timeOffset)).Subscribe(_ =>
            {
                var scene = SceneManager.LoadSceneAsync(_scene);

                print("Starting loading " + _scene);
                scene.completed += (a) =>
                {
                    print(_scene);
                    OnSceneLoad.Invoke();
                };
            }), this);
        }
    }
}
