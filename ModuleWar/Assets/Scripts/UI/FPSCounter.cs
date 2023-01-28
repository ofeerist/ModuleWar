using TMPro;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.UI
{
    internal class FPSCounter : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textMesh;
        
        private void Start()
        {
            Observable.EveryEndOfFrame().Subscribe(x =>
            {
                _textMesh.text = Mathf.RoundToInt(1 / Time.unscaledDeltaTime).ToString();
            }).AddTo(this);
        }
    }
}
