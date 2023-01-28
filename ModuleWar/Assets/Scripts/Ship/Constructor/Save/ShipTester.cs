using Arena;
using Cinemachine;
using Ship;
using Ship.Constructor;
using Ship.Constructor.Palette;
using Ship.SaveLoad;
using System;
using UI;
using UniRx;
using UnityEngine;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ShipTester : MonoBehaviour
    {
        [SerializeField] private ShipSaver _shipSaver;
        [SerializeField] private BaseShipLoader _shipLoader;
        [SerializeField] private ShipValidator _validator;

        [Space]

        [SerializeField] private Transform _testPosition;
        [SerializeField] private Vector3 _scale;

        [Space]

        [SerializeField] private Camera _editorCamera;
        [SerializeField] private CinemachineVirtualCamera _testCamera;
        [SerializeField] private GroupTransition _blackScreen;

        [Space]

        [SerializeField] private GeneratorPlacer _generator;

        [Space]

        [SerializeField] private GameObject[] _toDisable;

        private ShipBase _ship;
        private readonly SerialDisposable _serialDisposable = new();

        private void Start()
        {
            _generator.OnLoadFinish += LoadFinish;
        }

        public void TestShip()
        {
            if (!_validator.ValidateShip()) return;

            var save = _shipSaver.SaveShipNoJson();
            _ship = _shipLoader.NetLoad(save, _testPosition.position, _testPosition.rotation, _scale);
            ShipInitializator.Init(_ship, _testCamera.GetComponent<Camera>());

            EnableTest();
        }

        public void EnableTest()
        {
            _blackScreen.ToBlack();

            _generator.Generate();
            _testCamera.Follow = _ship.transform;
        }

        private void LoadFinish()
        {
            _editorCamera.enabled = false;
            _testCamera.gameObject.SetActive(true);

            foreach (var item in _toDisable)
            {
                item.SetActive(!item.activeSelf);
            }

            _blackScreen.ToTransparent();
        }

        public void DisableTest()
        {
            _blackScreen.ToBlack();

            _serialDisposable.Disposable = Observable.Timer(TimeSpan.FromSeconds(1f)).Subscribe(x =>
            {
                _editorCamera.enabled = true;
                _testCamera.gameObject.SetActive(false);

                Destroy(_ship.gameObject);
                
                foreach (var item in _toDisable)
                {
                    item.SetActive(!item.activeSelf);
                }

                _generator.DestroyGenerators();

                _blackScreen.ToTransparent();
            });
        }
    }
}
