using Arena;
using UnityEngine;

namespace Assets.Scripts.Utility.Test
{
    internal class GenerateOnStart : MonoBehaviour
    {
        [SerializeField] private GeneratorPlacer _generator;

        private void Start()
        {
            _generator.Generate();
        }
    }
}
