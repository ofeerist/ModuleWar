using UnityEngine;
using UnityEngine.UI;
using Utility;

namespace Ship.Constructor
{
    internal class ScrollCenterer : MonoBehaviour
    {
        [SerializeField] private ScrollRect _rect;
        [SerializeField] private RectTransform _target;
        private void Start()
        {
            UIExtensions.ScrollToCenter(_rect, _target, RectTransform.Axis.Vertical);
            UIExtensions.ScrollToCenter(_rect, _target, RectTransform.Axis.Horizontal);
        }
    }
}
