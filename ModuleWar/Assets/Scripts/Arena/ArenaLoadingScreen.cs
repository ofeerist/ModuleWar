using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Utility;

namespace Arena
{
    internal class ArenaLoadingScreen : MonoBehaviour
    {
        [SerializeField] private GeneratorPlacer _placer;

        [Space]

        [SerializeField] private Slider _slider;
        [SerializeField] private float _min;

        [SerializeField] private float _sliderLerp;

        [SerializeField] private Animator _screen;

        [Space]

        [SerializeField] private List<LoadingChunk> _chunks;
        [SerializeField] private float _startOffset;

        private Loader _loader;
        private float _progress;

        private readonly SerialDisposable _serial = new();

        public event Action LoadingFinished;
        public UnityEvent LoadingFinishedEvent; 

        private void Start()
        {
            _placer.OnGeneratorLoadFinish += () =>
            {
                _loader = new Loader(_chunks.ToArray());

                _loader.ProgressUpdated += ProgressUpdate;
                _loader.OnFinished += OnFinished;

                _progress = _min;

                _serial.Disposable = Observable.EveryUpdate().Subscribe(x =>
                {
                    _slider.value = Mathf.Lerp(_slider.value, _progress, _sliderLerp * Time.deltaTime);
                });
            };

            _placer.OnGeneratorLoad += (generator) =>
            {
                _chunks.Add(new LoadingChunk(generator, generator.Size.magnitude));
            };

            _serial.AddTo(this);
        }

        private void OnFinished()
        {
            Observable.Timer(TimeSpan.FromSeconds(_startOffset)).Subscribe(x =>
            {

                _screen.SetBool("Off", false);

                _serial.Dispose();

                LoadingFinished?.Invoke();
                LoadingFinishedEvent?.Invoke();

            }).AddTo(this);
        }

        private void ProgressUpdate(float progress)
        {
            _progress = _min + (progress * (1 - _min));
        }
    }
}
