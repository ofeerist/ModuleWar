using Ship.Module.HealthInterface;
using System;
using UnityEngine;


namespace Arena.Terrain
{
    public struct TerrainBlock
    {
        public int Id;
        public float Health;

        public TerrainBlock(int id, float health)
        {
            Id = id;
            Health = health;
        }
    }

    public class TerrainChunk
    {
        public readonly TerrainBlock[,] Blocks;
        public readonly Vector2Int Size;

        public TerrainChunk(Vector2Int size)
        {
            Blocks = new TerrainBlock[size.x, size.y];
            Size = size;
        }
    }
}
