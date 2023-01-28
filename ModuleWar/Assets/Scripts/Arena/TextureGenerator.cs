using System;
using System.Collections;
using Arena.Terrain;
using Pathfinding;
using Photon.Pun;
using UniRx;
using UnityEngine;
using Utility;



namespace Arena
{
    internal class TextureGenerator : MonoChunk
    {
        [HideInInspector] 
        public PhotonView View;

        [HideInInspector]
        public int Index;

        [SerializeField] protected Transform _parent;

        [Space]

        [SerializeField] private float _inH;
        [SerializeField] private float _inLacunarity;
        [SerializeField] private float _octaves;

        [Space]

        [SerializeField] private Vector2Int _size;
        public Vector2Int Size => _size;

        [SerializeField] private float _xOrg;
        [SerializeField] private float _yOrg;

        [SerializeField] private Vector2 _scale;
        public Vector2 Scale => _scale;

        [Space]

        [SerializeField] private NullDistorter _distorter;
        [SerializeField] private PixelChooser _chooser;

        [Space]

        [SerializeField] protected TextureGenerator _nextGenerator;

        protected int _seed;

        private Color[] _colors;

        private Texture2D _texture2D;

        [Space]

        [SerializeField] private SpriteRenderer _renderer;
        [SerializeField] private PixelCollider2D _collider;
        [SerializeField] private ChunkHealth _chunk;
        public ChunkHealth ChunkHealth => _chunk;  

        [SerializeField] private DynamicGridObstacle _gridObstacle;

        public event Action<Vector2Int, TerrainBase> ModuleGenerated;

        private Vector2 _position;
        private int _timer;
        public void SetOrg(Vector2 org)
        {
            _xOrg = org.x;
            _yOrg = org.y;
        }

        public void SetChooser(PixelChooser chooser)
        {
            _chooser = chooser;
        }

        public void SetNextGenerator(TextureGenerator generator)
        {
            _nextGenerator = generator;
        }

        public void SetDistorterFormula(string formula)
        {
            SetDistorter(new NullDistorter());
            _distorter.SetFormula(formula);
        }

        public void SetSize(Vector2Int size)
        {
            _size = size;

            CreateTexture();
        }
        public void SetScale(Vector2 scale)
        {
            _scale = scale;
        }
        public void SetDistorter(NullDistorter distorter)
        {
            _distorter = distorter;
        }

        private void Start()
        {
            CreateTexture();
            _position = transform.position;
        }

        private void CreateTexture()
        {
            _texture2D = new Texture2D(_size.x, _size.y)
            {
                filterMode = FilterMode.Point,
                requestedMipmapLevel = 0,
                wrapMode = TextureWrapMode.Clamp
            };

            if(_collider)
                _collider.UpdateSprite(Sprite.Create(_texture2D,
                    new Rect(0, 0, _texture2D.width, _texture2D.height),
                    Vector2.zero));

            _colors = new Color[_size.x * _size.y];
        }

        public virtual void Generate(int seed, int timer)
        {
            _seed = seed;
            _timer = timer;

            var heavyMethod = Observable.Start(() =>
            {
                GenerationLoop();
            });

            Observable.Zip(heavyMethod)
            .ObserveOnMainThread() 
            .Subscribe(xs =>
            {
                Observable.NextFrame().Subscribe(x => EndGeneration()).AddTo(this);
            });

            /*
            Observable.FromMicroCoroutine(GenerationLoop, publishEveryYield: true).Subscribe(x =>
            {
                EndGeneration();
            }).AddTo(this);
            */
        }

        private Pathfinding.GridGraph _graph;
        public void CreatePathGrid(Pathfinding.GridGraph graph, Vector2 position, LayerMask obstacle)
        {
            _graph = graph;
            _graph.SetDimensions(_size.x, _size.y, 1.0f);
            _graph.center = position;
            _graph.is2D = true;
            _graph.collision.use2D = true;
            _graph.collision.mask = obstacle;
        }

        public void UpdatePathGrid()
        {
            if (AstarPath.active)
                _gridObstacle.DoUpdateGraphs();

            //StartCoroutine(AsyncUpdatePath());
            //AstarPath.active.Scan();
            //_graph.Scan();
        }
        private IEnumerator AsyncUpdatePath()
        {
            if (AstarPath.active.isScanning) yield break;

            foreach (var item in AstarPath.active.ScanAsync())
            {
                yield return null;
            }
        }

        private void EndGeneration()
        {
            UpdateTexture();

            Loaded();

            if (!_renderer.isVisible)
                OnBecameInvisible();
        }

        protected void GenerationLoop()
        {
            var p = new FractalNoise(_inH, _inLacunarity, _octaves, new Perlin(_seed));

            int y = 0;

            while (y < _size.y)
            {
                int x = 0;
                while (x < _size.x)
                {
                    float xCoord = _xOrg + (float)x / _size.x * _scale.x;
                    float yCoord = _yOrg + (float)y / _size.y * _scale.y;
                    float sample = p.BrownianMotion(xCoord, yCoord) + _distorter.Distort(x, y);

                    CreateBlock(sample, x, y);

                    x++;
                }
                y++;
            }

            if (_collider)
                _collider.Regenerate(_chunk.Terrain);

            if (_nextGenerator)
                _nextGenerator.Generate(_seed, _timer + 1);
        }

        public void UpdateTexture()
        {
            _texture2D.SetPixels(_colors);
            _texture2D.Apply();
            _renderer.sprite = 
                Sprite.Create(_texture2D, 
                new Rect(0, 0, _texture2D.width, _texture2D.height), 
                Vector2.zero);
        }

        public void SetColor(int x, int y, Color color)
        {
            var index = _size.x * y + x;
            _colors[index] = color;
        }

        private void CreateBlock(float sample, int x, int y)
        {
            if (!_chooser.GetBlock(sample, x + _position.x, y + _position.y, out var block)) return;

            SetColor(x, y, block.StartColor);

            ModuleGenerated?.Invoke(new Vector2Int(x, y), block);
        }

        private void OnBecameInvisible()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                transform.GetChild(i).gameObject.SetActive(false);
            }
        }

        private void OnBecameVisible()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                transform.GetChild(i).gameObject.SetActive(true);
            }
        }
    }
}
