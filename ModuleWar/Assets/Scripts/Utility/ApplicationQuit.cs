using UnityEngine;

namespace Assets.Scripts.Utility
{
    internal class ApplicationQuit : MonoBehaviour
    {
        public void Quit()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit();
#endif
        }
    }
}
