using Pathfinding;
using Photon.Pun;
using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using Utility;

namespace Arena
{
    [Serializable]
    internal class BackgroundUnit
    {
        public TextureGenerator Generator;
        public float Distort;
    }
    internal class GeneratorPlacer : MonoChunk
    {
        [SerializeField] private PhotonView _view;

        [Space]

        [SerializeField] private TextureGenerator _generatorPrefab;
        [SerializeField] private GameObject _edgePrefab;
        [SerializeField] private Vector2 _scale; 

        [SerializeField] private BackgroundUnit[] _backgroundUnits;

        [SerializeField] private PixelChooser _pixelChooser;

        [SerializeField] private int _width;
        [SerializeField] private int _height;
        [SerializeField] private int offset;

        [Space]

        [SerializeField] private float _centerCircle;
        [SerializeField] private LayerMask _navmeshObstacle;
        private Vector3 _center;

        private readonly List<TextureGenerator> _generators = new();
        public List<TextureGenerator> Generators => _generators;

        public event Action OnLoadFinish;
        public event Action<TextureGenerator> OnGeneratorLoad;
        public event Action OnGeneratorLoadFinish;

        private readonly Vector3[] _edges = new Vector3[]
        {
            new Vector3(2.5f, 2.5f), new Vector3(2.5f, 1.5f), 
            new Vector3(2.5f, 0.5f), new Vector3(2.5f, -0.5f),
            new Vector3(-0.5f, 2.5f), new Vector3(-0.5f, 1.5f),
            new Vector3(-0.5f, 0.5f), new Vector3(-0.5f, -0.5f),
            new Vector3(1.5f, 2.5f), new Vector3(0.5f, 2.5f),
            new Vector3(0.5f, -0.5f), new Vector3(1.5f, -0.5f),
        };

        public void DestroyGenerators()
        {
            foreach (var item in _generators)
            {
                Destroy(item.gameObject);
            }

            _generators.Clear();
        }

        private Vector3 MultiplyVector(Vector3 v1, Vector3 v2)
        {
            return new Vector3(v1.x * v2.x, v1.y * v2.y, v1.z * v1.z);
        }

        private IEnumerator GeneratorsLoaded()
        {
            Physics2D.simulationMode = SimulationMode2D.FixedUpdate;

            if (AstarPath.active)
                foreach (var item in AstarPath.active.ScanAsync())
                {
                    if (Mathf.Round(item.progress * 10) % 10 == 0)
                        yield return null;
                }

            Loaded();
        }

        private void CreateEdges(Vector3 center)
        {
            var edgeScale = _width / 2 * offset * Vector3.one;
            foreach (var item in _edges)
            {
                var edge = Instantiate(_edgePrefab, transform);
                edge.transform.localPosition = MultiplyVector(center, item);
                edge.transform.localScale = edgeScale;
            }
        }

        private void CreateGridGraph()
        {
            if (AstarPath.active)
            {
                var data = AstarPath.active.data;

                var graph = data.AddGraph(typeof(GridGraph)) as GridGraph;
                graph.SetDimensions(_width * _generatorPrefab.Size.x, _height * _generatorPrefab.Size.y, 1f);
                graph.is2D = true;
                graph.collision.use2D = true;
                graph.collision.mask = _navmeshObstacle;
            }
        }

        private TextureGenerator _pastGen;
        private IEnumerator CreateGenerators()
        {
            _pastGen = null;
            for (int x = 0; x < _width; x++)
            {
                for (int y = 0; y < _height; y++)
                {
                    var generator = Instantiate(_generatorPrefab, transform);
                    
                    generator.transform.parent = transform;
                    generator.transform.localPosition = new Vector3(x * offset, y * offset, 0);

                    generator.SetScale(_scale);
                    generator.SetOrg(new Vector2(x * _scale.x, y * _scale.y));
                    generator.SetChooser(_pixelChooser);
                    generator.SetNextGenerator(_pastGen);

                    generator.View = _view;

                    generator.Index = _generators.Count;
                    _generators.Add(generator);

                    GeneratorDistorte(generator, new Vector2Int(x, y));

                    OnGeneratorLoad?.Invoke(generator);

                    _pastGen = generator;
                }

                yield return null;
            }
        }

        private void CreateBackground()
        {
            foreach (var unit in _backgroundUnits)
            {
                var generator = unit.Generator;

                generator.SetNextGenerator(_pastGen);
                generator.SetSize(new Vector2Int(_width, _height) * offset);
                generator.SetScale(generator.Size / 10);

                generator.transform.localPosition = Vector3.zero;

                generator.GetComponent<ParallaxEffect>().StartParallax(_center);
                generator.SetDistorter(new FloatDistorter(unit.Distort));

                _pastGen = generator;
            }
        }

        private void GeneratorOnLoadSubscribe()
        {
            _generators[0].OnLoaded += () =>
            {
                Observable.FromMicroCoroutine(GeneratorsLoaded)
                .Subscribe(x => OnLoadFinish?.Invoke()).AddTo(this);
            };
            OnGeneratorLoadFinish?.Invoke();
        }

        private void StartGeneration(int seed, TextureGenerator pastGen)
        {
            seed = seed == 0 ? Time.frameCount : seed;
            _pixelChooser.Generate(seed);

            Observable.TimerFrame(1).Subscribe(x =>
            {
                if (pastGen)
                    pastGen.Generate(seed, 0);
            }).AddTo(this);
        }

        public void Generate(int seed = 0)
        {
            Physics2D.simulationMode = SimulationMode2D.Update;

            var center = new Vector3(_width, _height) / 2 * offset;
            transform.position -= center;

            _center = center + transform.position;

            CreateEdges(center);

            CreateGridGraph();

            Observable.FromMicroCoroutine(CreateGenerators).Subscribe(x =>
            {

                CreateBackground();

                GeneratorOnLoadSubscribe();

                StartGeneration(seed, _pastGen);

            }).AddTo(this);
        }

        [PunRPC]
        public void ChunkTakedDamage(int index, Vector3 localPosition, float damage)
        {
            _generators[index].ChunkHealth.SyncDamage(localPosition, damage);
        }

        private void GeneratorDistorte(TextureGenerator generator, Vector2Int position)
        {
            generator.SetDistorter(
                new CenterDistorter(generator.transform.position, _centerCircle, _center));

            if (position.x == 0)
            {
                static float Distort(float x, float y) 
                {
                    return (20 - x) / 20 + y * 0;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.x == _width - 1)
            {
                static float Distort(float x, float y)
                {
                    return x / 20 + y * 0;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.y == 0)
            {
                static float Distort(float x, float y)
                {
                    return (20 - y) / 20 + x * 0;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.y == _height - 1)
            {
                static float Distort(float x, float y)
                {
                    return y / 20 + x * 0;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.x == 0 && position.y == 0)
            {
                static float Distort(float x, float y)
                {
                    return (20 - x) / 20 + (20 - y) / 20;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.x == _width - 1 && position.y == 0)
            {
                static float Distort(float x, float y)
                {
                    return x / 20 + (20 - y) / 20;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.x == 0 && position.y == _height - 1)
            {
                static float Distort(float x, float y)
                {
                    return (20 - x) / 20 + y / 20;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }

            if (position.x == _width - 1 && position.y == _height - 1)
            {
                static float Distort(float x, float y)
                {
                    return x / 20 + y / 20;
                }
                generator.SetDistorter(new FuncDistorter(Distort));
            }
        }

        public class NullDistorter : Arena.NullDistorter
        {
            public override float Distort(float x, float y)
            {
                return 0;
            }
        }

        public class FloatDistorter : NullDistorter
        {
            [SerializeField] private float distort;
            public override float Distort(float x, float y)
            {
                return distort;
            }

            public FloatDistorter(float distort)
            {
                this.distort = distort;
            }
        }

        public class FuncDistorter : NullDistorter
        {
            private Func<float, float, float> _formula;

            public FuncDistorter(Func<float, float, float> formula)
            {
                _formula = formula;
            }

            public override float Distort(float x, float y)
            {
                return _formula(x, y);
            }
        }

        public class CenterDistorter : NullDistorter
        {
            private Vector3 _center;
            private Vector3 _worldPosition;
            private float _distance;

            public CenterDistorter(Vector3 worldPosition, float distance, Vector3 center)
            {
                _worldPosition = worldPosition;
                _distance = distance;
                _center = center;
            }

            public override float Distort(float x, float y)
            {
                var worldPosition = _worldPosition + new Vector3(x, y);

                if(Vector3.Distance(_center, worldPosition) < _distance)
                {
                    return -10;
                }

                return base.Distort(x, y);
            }
        }
    }
}
