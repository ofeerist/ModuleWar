using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utility;
using UniRx;

namespace Arena
{
    static class DistorterCacher
    {
        public static Dictionary<string, float> Cache = new();
    }
    [Serializable]
    internal class NullDistorter
    {
        [SerializeField] private string _formula = "x*0 + y*0";

        static float Eval(string expression)
        {
            System.Data.DataTable table = new System.Data.DataTable();
            return (float)Convert.ToDouble(table.Compute(expression, string.Empty));
        }
        public virtual float Distort(float x, float y)
        {
            var exp = _formula.Replace("x", x.ToString()).Replace("y", y.ToString());
            float value;

            if (DistorterCacher.Cache.ContainsKey(exp))
            {
                value = DistorterCacher.Cache[exp];
            }
            else
            {
                value = Eval(exp);
                DistorterCacher.Cache.Add(exp, value);
            }

            return value;
        }
        public void SetFormula(string formula)
        {
            _formula = formula;
        }
    }

    internal class EnvironmentGenerator : MonoChunk
    {
        [SerializeField] protected Transform _parent;
        
        [Space]

        [SerializeField] private float _inH;
        [SerializeField] private float _inLacunarity;
        [SerializeField] private float _octaves;

        [Space]

        [SerializeField] private Vector2Int _size;

        [SerializeField] private float _xOrg;
        [SerializeField] private float _yOrg;

        [SerializeField] private float _scale = 1.0F;

        [Space]

        [SerializeField] private NullDistorter _distorter;
        [SerializeField] private BlockChooser _chooser;

        [Space]

        [SerializeField] protected EnvironmentGenerator _nextGenerator;

        protected int _seed;
        public virtual void Generate(int seed)
        {
            _seed = seed;
            Observable.FromMicroCoroutine(GenerationLoop).Subscribe(x =>
            {
                if (_nextGenerator)
                    _nextGenerator.Generate(seed);

                Loaded();
            });
        }

        protected IEnumerator GenerationLoop()
        {
            var p = new FractalNoise(_inH, _inLacunarity, _octaves, new Perlin(_seed));

            float y = 0;

            while (y < _size.y)
            {
                float x = 0;
                while (x < _size.x)
                {
                    float xCoord = _xOrg + x / _size.x * _scale;
                    float yCoord = _yOrg + y / _size.y * _scale;
                    float sample = p.BrownianMotion(xCoord, yCoord) + _distorter.Distort(x, y);

                    CreateBlock(sample, x, y);

                    x++;
                }
                y++;

                if (y % 3 == 0) yield return null;
            }

            yield return null;
        }

        private void CreateBlock(float sample, float x, float y)
        {
            var position = transform.position;
            if (!_chooser.GetBlock(sample, x + position.x, y + position.y, out var block)) return;

            var s = block.transform.localScale;
            var g = Instantiate(block, new Vector3(x + s.x, y + s.y, 0), Quaternion.identity);
            g.transform.SetParent(_parent, false);
        }
    }
}
