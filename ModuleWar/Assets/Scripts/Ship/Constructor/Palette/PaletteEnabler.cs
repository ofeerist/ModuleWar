using UniRx;
using UnityEngine;

namespace Ship.Constructor.Palette
{
    internal class PaletteEnabler : MonoBehaviour
    {
        [SerializeField] private Animator _blackScreen;
        [SerializeField] private float _speed;

        [Space]

        [SerializeField] private GameObject _content;

        private bool _state;
        private readonly SerialDisposable _serial = new();

        private void Start()
        {
            _blackScreen.speed = _speed;

            Enable();

            _serial.AddTo(this);
        }

        public void Turn()
        {
            if (_state) Enable();
            else Disable();
        }

        public void Enable()
        {
            _state = false;
            _blackScreen.SetBool("Off", _state);

            _content.SetActive(_state);
        }
        public void Disable()
        {
            _state = true;
            _blackScreen.SetBool("Off", _state);

            _content.SetActive(_state);
        }
    }
}
