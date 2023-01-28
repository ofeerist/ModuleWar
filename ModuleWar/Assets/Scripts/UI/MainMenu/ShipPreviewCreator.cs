using Ship.SaveLoad;
using UnityEngine;

namespace UI.MainMenu
{
    internal class ShipPreviewCreator : MonoBehaviour
    {
        [SerializeField] private BaseShipLoader _shipLoader;
        [SerializeField] private Camera _camera;
        [SerializeField] private RenderTexture _renderTexture;
        [SerializeField] private Vector3 _offset;
        [SerializeField] private Vector3 _scale;

        public Texture2D CreatePreview(ShipSave save)
        {
            var position = transform.position; position.z = 0;
            var ship = _shipLoader.Load(save, position + _offset, Quaternion.identity, _scale);

            _camera.Render();

            RenderTexture.active = _renderTexture;
            var result = new Texture2D(_renderTexture.width, _renderTexture.height, TextureFormat.RGBA32, false);
            result.ReadPixels(new Rect(0, 0, _renderTexture.width, _renderTexture.height), 0, 0);
            result.Apply();

            Destroy(ship.gameObject);

            return result; 
        }
    }
}
