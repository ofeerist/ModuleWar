using Photon.Pun;
using Ship;
using Ship.SaveLoad;
using UI.MainMenu;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Arena
{
    internal class ArenaCreator : MonoBehaviour
    {
        [SerializeField] private BaseShipLoader _loader;
        [SerializeField] private Cinemachine.CinemachineVirtualCamera _camPrefab;
        [SerializeField] private GeneratorPlacer _placer;
        [SerializeField] private ArenaLoadingScreen _arenaLoadingScreen;

        private ShipSave _shipSave;
        private CompositeDisposable _disposable = new();

        private void Start()
        {
            DontDestroyOnLoad(this);

            _disposable.AddTo(this);
        }

        public void PrepareLoad(ShipPreviewSelector _hipSelector)
        {
            _shipSave = _hipSelector.ActivePreview.Save;
        }

        public void StartArena()
        {
            var ship = CreateShip();
            _placer.Generate((int)PhotonNetwork.CurrentRoom.CustomProperties["seed"]);

            var _transform = transform;
            var scene = SceneManager.GetSceneByName("Arena");

            SceneManager.MoveGameObjectToScene(gameObject, scene);

            /*
            var count = _transform.childCount;
            for (int i = 0; i < count; i++)
            {
                var child = _transform.GetChild(0);
                child.parent = null;

                _disposable.Add(Observable.NextFrame().Subscribe(x =>
                {
                    SceneManager.MoveGameObjectToScene(child.gameObject, scene);
                }));
            }
            */

            _arenaLoadingScreen.LoadingFinished += () =>
            {
                ship.gameObject.SetActive(true);

                _disposable.Dispose();
                //Destroy(gameObject);
            };
        }

        private ShipBase CreateShip()
        {
            var ship = _loader.NetLoad(_shipSave, Vector3.zero, Quaternion.identity, Vector3.zero);
            ShipInitializator.Init(ship, _camPrefab.GetComponent<Camera>());
            ship.gameObject.SetActive(false);

            _camPrefab.Follow = ship.transform;
            _camPrefab.gameObject.SetActive(true);

            return ship;
        }
    }
}
