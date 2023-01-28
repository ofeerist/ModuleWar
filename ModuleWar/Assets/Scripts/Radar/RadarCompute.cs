using UniRx;
using UnityEngine;

namespace Assets.Scripts.Radar
{
    internal class RadarCompute : MonoBehaviour
    {
        [SerializeField] private ComputeShader _computeShader;
        [SerializeField] private RenderTexture _cameraRenderTexture;
        [SerializeField] private RenderTexture _resultRenderTexture;
        [SerializeField] private RadarLight _radarLight;

        [Space]

        [SerializeField] private float _speed;
        [SerializeField] private float _multiplier;

        private void Start()
        {
            var kernel = _computeShader.FindKernel("CSMain");

            var width = _cameraRenderTexture.width;
            var height = _cameraRenderTexture.height;

            _resultRenderTexture.enableRandomWrite = true;
            _cameraRenderTexture.enableRandomWrite = true;

            var lerpLayer = new RenderTexture(_resultRenderTexture.width, _resultRenderTexture.height, _resultRenderTexture.depth)
            {
                enableRandomWrite = true
            };

            _computeShader.SetTexture(kernel, "Result", _resultRenderTexture);
            _computeShader.SetTexture(kernel, "LerpLayer", lerpLayer);

            

            _radarLight.ProgressChanged += (progress) =>
            {
                _computeShader.SetFloat("Progress", progress);
            };

            Observable.EveryUpdate().Subscribe(x =>
            {
                _computeShader.SetFloat("Speed", _speed);
                _computeShader.SetFloat("Multiplier", _multiplier);

                _computeShader.SetTexture(kernel, "Input", _cameraRenderTexture);

                _computeShader.SetFloat("DeltaTime", Time.deltaTime);

                _computeShader.Dispatch(kernel, width / 8, height / 8, 1);
            }).AddTo(this);
        }
    }
}
