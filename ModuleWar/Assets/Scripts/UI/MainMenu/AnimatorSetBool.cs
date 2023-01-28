using UnityEngine;

namespace Assets.Scripts.UI.MainMenu
{
    internal class AnimatorSetBool : MonoBehaviour
    {
        [SerializeField] private Animator _animator;
        [SerializeField] private string _name;

        [SerializeField] private bool _invert;

        public void SetBool(bool state)
        {
            if (_invert)
                _animator.SetBool(_name, state);
            else
                _animator.SetBool(_name, !state);
        }
    }
}
