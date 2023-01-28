using Photon.Pun;
using Ship.Module.HealthInterface;
using System;
using System.Collections.Generic;
using System.Reflection;
using UniRx;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using Utility;

namespace Arena.Terrain
{
    internal class ChunkHealth : MonoBehaviour, ITakeDamageable
    {
        [SerializeField] private TextureGenerator _generator;
        [SerializeField] private PixelCollider2D _collider2D;
        [SerializeField] private TerrainDictionary _terrainDictionary;
        [SerializeField] private ShadowCaster2D _casterPrefab;

        [SerializeField] private ParticleSystem _deathParticle;

        private TerrainChunk _terrain;
        public TerrainChunk Terrain => _terrain;

        private Dictionary<int, TerrainBase> _database;
        private Vector2Int _size;

        private static FieldInfo shapePathField =
            typeof(ShadowCaster2D).GetField("m_ShapePath", BindingFlags.NonPublic | BindingFlags.Instance);

        private static FieldInfo shapeHash =
            typeof(ShadowCaster2D).GetField("m_ShapePathHash", BindingFlags.NonPublic | BindingFlags.Instance);

        public event Action<Vector3, TerrainBase> OnTerrainDeath;

        private void Start()
        {
            _database = _terrainDictionary.Database;

            _terrain = new TerrainChunk(_generator.Size);
            _size = _terrain.Size;

            _generator.ModuleGenerated += ModuleGenerated;
            _generator.OnLoaded += OnLoaded;
        }

        Vector3[] ConvertArray(Vector2[] v3)
        {
            Vector3[] v2 = new Vector3[v3.Length];
            for (int i = 0; i < v3.Length; i++)
            {
                Vector2 tempV3 = v3[i];
                v2[i] = new Vector3(tempV3.x, tempV3.y);
            }
            return v2;
        }

        private void UpdateShadowFromPoints(ShadowCaster2D _caster, Vector3[] points)
        {
            // Set the shadow path
            shapePathField.SetValue(_caster, points);

            unchecked
            {
                // I have no idea what im doing with hashcodes but other examples are done like this
                int hashCode = (int)2166136261 ^ shapePathField.GetHashCode();
                hashCode = hashCode * 16777619 ^ (points.GetHashCode());

                // Set the shapes hash to a random value which forces it to update the mesh in the next frame
                shapeHash.SetValue(_caster, hashCode);
            }
        }

        private void ShadowRegenerate()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                var child = transform.GetChild(i);
                Destroy(child.gameObject);
            }

            foreach (var item in _collider2D.World_Paths)
            {
                var caster = Instantiate(_casterPrefab, transform);
                UpdateShadowFromPoints(caster, ConvertArray(item.ToArray()));
            }
        }

        private void OnLoaded()
        {
            _collider2D.UpdateCollider();
            ShadowRegenerate();
        }

        private void ModuleGenerated(Vector2Int position, TerrainBase module)
        {
            _terrain.Blocks[position.x, position.y].Id = module.Id;
            _terrain.Blocks[position.x, position.y].Health = module.MaxHealth;
        }

        private void TerrainOnDeath(Vector2Int position, TerrainBase blockData)
        {
            _terrain.Blocks[position.x, position.y].Id = 0;

            _generator.SetColor(position.x, position.y, Color.clear);
            _generator.UpdateTexture();

            _collider2D.Regenerate(_terrain);
            _collider2D.UpdateCollider();
            ShadowRegenerate();

            _generator.UpdatePathGrid();

            var worldPos = transform.position + new Vector3(position.x, position.y);

            OnTerrainDeath?.Invoke(worldPos, blockData);

            var particle = 
                Instantiate(_deathParticle, worldPos, Quaternion.identity);
            particle.startColor = blockData.DeadColor;
        }

        public void TakeDamage(IDamageable damageable, ref float damage, RaycastHit2D hit)
        {
            var rayHit = hit.point - hit.normal / 2;
            var localPosition = new Vector3(rayHit.x, rayHit.y) - transform.position;
            var position = Vector2Int.FloorToInt(localPosition);

            if (position.x >= _size.x || position.y >= _size.y ||
                position.x < 0 || position.y < 0) return;

            var block = _terrain.Blocks[position.x, position.y];

            if (block.Id == 0) return;

            _generator.View.RPC(nameof(GeneratorPlacer.ChunkTakedDamage), RpcTarget.AllViaServer,
                _generator.Index, localPosition, damage);
        }

        public void SyncDamage(Vector3 localposition, float damage)
        {
            var position = Vector2Int.FloorToInt(localposition);
            var block = _terrain.Blocks[position.x, position.y];

            if (block.Id == 0) return;

            var blockData = _database[block.Id];
            var maxHealth = blockData.MaxHealth;

            _terrain.Blocks[position.x, position.y].Health -= damage;

            _generator.SetColor(position.x, position.y,
                Color.Lerp(blockData.StartColor, blockData.DeadColor, block.Health / maxHealth));
            _generator.UpdateTexture();

            if (_terrain.Blocks[position.x, position.y].Health <= 0)
            {
                TerrainOnDeath(position, blockData);
            }
        }
    }
}
