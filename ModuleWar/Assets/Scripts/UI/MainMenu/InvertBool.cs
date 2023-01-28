using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.UI.MainMenu
{
    internal class InvertBool : MonoBehaviour
    {
        public UnityEvent<bool> Event;

        public void Invoke(bool b)
        {
            Event?.Invoke(!b);
        }
    }
}
