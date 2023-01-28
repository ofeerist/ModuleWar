using UnityEngine;

// Create a texture and fill it with Perlin noise.
// Try varying the xOrg, yOrg and scale values in the inspector
// while in Play mode to see the effect they have on the noise.

namespace Utility
{
    public class NoiseTester : MonoBehaviour
    {
        // Width and height of the texture in pixels.
        public int pixWidth;
        public int pixHeight;

        // The origin of the sampled area in the plane.
        public float xOrg;
        public float yOrg;

        // The number of cycles of the basic noise pattern that are repeated
        // over the width and height of the texture.
        public float scale = 1.0F;

        private Texture2D noiseTex;
        private Color[] pix;
        private Renderer rend;

        public float InH;
        public float InLacunarity;
        public float Octaves;

        public float Offset;
        public float Gain;

        void Start()
        {
            rend = GetComponent<Renderer>();

            // Set up the texture and a Color array to hold pixels during processing.
            noiseTex = new Texture2D(pixWidth, pixHeight);
            pix = new Color[noiseTex.width * noiseTex.height];
            rend.material.mainTexture = noiseTex;
        }

        void CalcNoise()
        {
            var fractal = new FractalNoise(InH, InLacunarity, Octaves);

            // For each pixel in the texture...
            float y = 0.0F;

            while (y < noiseTex.height)
            {
                float x = 0.0F;
                while (x < noiseTex.width)
                {
                    float xCoord = xOrg + x / noiseTex.width * scale;
                    float yCoord = yOrg + y / noiseTex.height * scale;
                    float sample = fractal.RidgedMultifractal(xCoord, yCoord, Offset, Gain);
                    pix[(int)y * noiseTex.width + (int)x] = new Color(sample, sample, sample);
                    x++;
                }
                y++;
            }

            // Copy the pixel data to the texture and load it into the GPU.
            noiseTex.SetPixels(pix);
            noiseTex.Apply();
        }

        void Update()
        {
            CalcNoise();
        }
    }
}
