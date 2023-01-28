using UnityEngine;

namespace Ship.Constructor
{
    internal class ConstructorField : MonoBehaviour
    {
        [SerializeField] private int _size;
        public int Size => _size;
    }
}
