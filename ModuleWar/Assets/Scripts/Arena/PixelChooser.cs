using System;
using Arena.Terrain;
using UnityEngine;
using Utility;

namespace Arena
{
    internal class PixelChooser : MonoBehaviour
    {
        [Serializable]
        private class Edge
        {
            public TerrainBase Block;

            [Space]

            public float MinThreshold;
            public float MaxThreshold;
        }

        [Serializable]
        private class Ore
        {
            public TerrainBase Block;

            public Vector2Int Size;

            [Space]

            public float H;
            public float Lacunarity;
            public float Octaves;

            public float XOrg;
            public float YOrg;

            public float Scale = 1.0F;

            [Space]

            public float MainMinThreshold;
            public float MainMaxThreshold;

            [Space]

            public float NoiseMinThreshold;
            public float NoiseMaxThreshold;

            public FractalNoise Noise;
        }

        [SerializeField] private Edge[] _edges;

        [Space]

        [SerializeField] private Ore[] _ores;

        public void Generate(int seed)
        {
            foreach (var ore in _ores)
            {
                ore.Noise = new FractalNoise(ore.H, ore.Lacunarity, ore.Octaves, new Perlin(seed++));
            }
        }

        public bool GetBlock(float sample, float x, float y, out TerrainBase block)
        {
            foreach (var ore in _ores)
            {
                if (sample < ore.MainMinThreshold || sample > ore.MainMaxThreshold) continue;

                var xCoord = ore.XOrg + x / ore.Size.x * ore.Scale;
                var yCoord = ore.YOrg + y / ore.Size.y * ore.Scale;
                var oreSample = ore.Noise.RidgedMultifractal(xCoord, yCoord, 0, 0);

                if (oreSample < ore.NoiseMinThreshold || oreSample > ore.NoiseMaxThreshold) continue;

                block = ore.Block;
                return true;
            }

            foreach (var edge in _edges)
            {
                if (sample < edge.MinThreshold || sample > edge.MaxThreshold) continue;

                block = edge.Block;
                return true;
            }

            block = null;
            return false;
        }
    }
}
