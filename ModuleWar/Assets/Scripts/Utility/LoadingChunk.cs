using System;
using UnityEngine;

namespace Utility
{
    public interface ILoadingChunk
    {
        event Action OnLoaded;
    }

    public class MonoChunk : MonoBehaviour, ILoadingChunk
    {
        public event Action OnLoaded;

        protected void Loaded() => OnLoaded?.Invoke();
    }

    [System.Serializable]
    public class LoadingChunk
    {
        public MonoChunk Chunk;
        public float Weight;

        public LoadingChunk(MonoChunk chunk, float weight)
        {
            Chunk = chunk;
            Weight = weight;
        }
    }

    public class Loader
    {
        private float _maxWeight = 0;
        private float _currentWeight = 0;

        private float _currentProgress;

        public float CurrentProgress => _currentProgress;

        public event Action<float> ProgressUpdated;
        public event Action OnFinished;

        public Loader(LoadingChunk[] chunks)
        {
            foreach (var chunk in chunks)
            {
                _maxWeight += chunk.Weight;

                chunk.Chunk.OnLoaded += () =>
                {
                    _currentWeight += chunk.Weight;
                    UpdateProgress();
                };
            }
        }

        private void UpdateProgress()
        {
            _currentProgress = _currentWeight / _maxWeight;
            ProgressUpdated?.Invoke(_currentProgress);

            if (Mathf.Approximately(_currentProgress, 1f))
                OnFinished?.Invoke();  
        }
    }
}
