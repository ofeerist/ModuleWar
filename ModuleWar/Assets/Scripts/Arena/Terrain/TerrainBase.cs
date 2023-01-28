using UnityEngine;

namespace Arena.Terrain
{
    public class TerrainBase : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer _renderer;
        public SpriteRenderer Renderer => _renderer;

        [SerializeField] private Color _startColor;
        public Color StartColor => _startColor;

        [SerializeField] private Color _deadColor;
        public Color DeadColor => _deadColor;

        [SerializeField] private int _id;
        public int Id => _id;

        [SerializeField] private float _maxHealth;
        public float MaxHealth => _maxHealth;
    }
}
