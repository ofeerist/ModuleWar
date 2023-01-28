using Arena;
using Arena.Terrain;
using Assets.Scripts.Collectables.Minerals;
using UnityEngine;

namespace Assets.Scripts.Minerals.Collectables
{
    [System.Serializable]
    internal class Mineral
    {
        public int Id;
        public MineralParticle Particle;
    }
    internal class MineralCollecatable : MonoBehaviour
    {
        [SerializeField] private GeneratorPlacer _placer;

        [Space]

        [SerializeField] private Mineral[] _minerals;

        private void Start()
        {
            foreach (var generator in _placer.Generators)
            {
                generator.ChunkHealth.OnTerrainDeath += OnTerrainDeath;
            }
        }

        private void OnTerrainDeath(Vector3 worldPos, TerrainBase terrain)
        {
            foreach (var mineral in _minerals)
            {
                if (mineral.Id != terrain.Id) continue;

                var fx = Instantiate(mineral.Particle, worldPos, Quaternion.identity);
                //fx.SetParticle(worldPos, terrain.DeadColor);
            }
        }
    }
}
