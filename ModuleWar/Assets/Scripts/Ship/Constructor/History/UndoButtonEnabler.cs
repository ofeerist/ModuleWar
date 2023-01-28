using Ship.Constructor;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.Ship.Constructor.History
{
    internal class UndoButtonEnabler : MonoBehaviour
    {
        [SerializeField] private ConstructorPlacer _placer;
        [SerializeField] private Button _button;

        private void Start()
        {
            var stack = _placer.UndoRedoStack;

            _button.interactable = stack.UndoCount > 0;

            stack.StacksChanged += () =>
            {
                _button.interactable = stack.UndoCount > 0;
            };
        }
    }
}
