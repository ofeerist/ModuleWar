using System;
using System.Collections;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Sound
{
    internal class MusicLooper : MonoBehaviour
    {
        [SerializeField] private AudioSource _source;
        [SerializeField] private AudioClip[] _clips;

        [SerializeField] private float _lerp;

        [SerializeField] private bool _startOnAwake; 

        private float _maxVolume;

        private readonly SerialDisposable _disposable = new();
        private readonly SerialDisposable _clipTimer = new();

        private AudioClip _current;

        private void Start()
        {
            _maxVolume = _source.volume;
            _source.volume = 0;

            _disposable.AddTo(this);
            _clipTimer.AddTo(this);

            if (_startOnAwake)
                ChangeMusic();
        }

        public void ChangeMusic()
        {
            _clipTimer.Disposable = Observable.FromMicroCoroutine(MusicStop).Subscribe(x =>
            {
                _current = _clips[UnityEngine.Random.Range(0, _clips.Length)];

                _source.PlayOneShot(_current);

                StartMusic();

                _clipTimer.Disposable = Observable.Timer(TimeSpan.FromSeconds(_current.length)).Subscribe(x =>
                {
                    ChangeMusic();
                });
            });
        }

        public void StartMusic()
        {
            _disposable.Disposable = Observable.FromMicroCoroutine(MusicStart).Subscribe(x => 
            {

            });
        }

        public void StopMusic()
        {
            _clipTimer.Disposable.Dispose();

            _disposable.Disposable = Observable.FromMicroCoroutine(MusicStop).Subscribe(x =>
            {

            });
        }

        private IEnumerator MusicStart()
        {
            while (true)
            {
                _source.volume = Mathf.Lerp(_source.volume, _maxVolume, _lerp * Time.deltaTime);

                var diff = Mathf.Abs(_source.volume - _maxVolume);

                if (diff <= 0.001f)
                    yield break;

                yield return null;
            }
        }

        private IEnumerator MusicStop()
        {
            while (true)
            {
                _source.volume = Mathf.Lerp(_source.volume, 0f, _lerp * Time.deltaTime);

                var diff = Mathf.Abs(_source.volume - 0);
                if (diff <= 0.000001f ||
                    diff <= Mathf.Max(Mathf.Abs(_source.volume), Mathf.Abs(0)) * 0.000001f)
                    yield break;

                yield return null;
            }
        }
    }
}
