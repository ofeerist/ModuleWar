using UnityEngine;

namespace Arena
{
    internal class BackGroundGenerator : EnvironmentGenerator
    {
        [SerializeField] private Camera _camera;
        [SerializeField] private RenderTexture _renderTexture;

        [Space]

        [SerializeField] private SpriteRenderer _spriteRenderer;

        public override void Generate(int seed)
        {
            base.Generate(seed);

            OnLoaded += () =>
            {
                var texture = CreatePreview();
                _spriteRenderer.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f), 100, 0, SpriteMeshType.FullRect);

                var _transform = _parent.transform;
                var count = _transform.childCount;
                for (int i = 0; i < count; i++)
                    Destroy(_transform.GetChild(i).gameObject);
            };
        }

        public Texture2D CreatePreview()
        {
            _camera.enabled = true;
            _camera.Render();

            RenderTexture.active = _renderTexture;
            var result = new Texture2D(_renderTexture.width, _renderTexture.height, TextureFormat.RGBA32, false);
            result.ReadPixels(new Rect(0, 0, _renderTexture.width, _renderTexture.height), 0, 0);
            result.Apply();

            _camera.enabled = false;
            return result;
        }
    }
}
