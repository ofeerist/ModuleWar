using UnityEngine;

namespace Ship.Constructor
{
    internal class AvailabilityShower : MonoBehaviour
    {
        [SerializeField] private ConstructorPlacer _placer;
        [SerializeField] private GameObject _showerPrefab;
        [SerializeField] private Transform _parent;
        private GameObject[] _showers = new GameObject[0];

        private void Start()
        {
            _placer.OnAvailabilityMapChanged += (map) =>
            {
                ClearShowers();

                _showers = new GameObject[map.Count];
                int i = 0;
                foreach(var position in map)
                {
                    //_showers[i] = Instantiate(_showerPrefab, _parent);
                    //_showers[i].transform.localPosition = _placer.KeyPositionToWorld(position);

                    i++;
                }
            };
        }

        private void ClearShowers() { foreach (var shower in _showers) Destroy(shower); }
    }
}
