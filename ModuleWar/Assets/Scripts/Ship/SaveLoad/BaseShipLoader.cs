using System.Collections.Generic;
using Newtonsoft.Json;
using Photon.Pun;
using Ship.Module;
using UnityEngine;

namespace Ship.SaveLoad
{
    public class BaseShipLoader : MonoBehaviour
    {
        [SerializeField] private PhotonView _baseShipPrefab;
        [SerializeField] private ModuleIDDictionary _database;
        [SerializeField] private PhotonView _view;
        public ShipBase Load(ShipSave save, Vector3 position, Quaternion rotation, Vector3 scale)
        {
            var ship = Instantiate(_baseShipPrefab.GetComponent<ShipBase>(), position, rotation);

            ship.transform.localScale = scale == Vector3.zero ? 
                _baseShipPrefab.transform.localScale
                : scale;

            var _t = ship.transform;

            var modules = new List<ModuleBase>();
            foreach (var module in save.Modules)
            {
                var m = Instantiate(_database.Database[module.Id], _t, false);
                m.transform.localPosition = new Vector3(module.Position.x, module.Position.y, 0);

                modules.Add(m);
                m.Ship = ship;
            }

            ship.SetModules(modules.ToArray());

            return ship;
        }

        public ShipBase NetLoad(ShipSave save, Vector3 position, Quaternion rotation, Vector3 scale)
        {
            var ship = PhotonNetwork.Instantiate(_baseShipPrefab.name, position, rotation).GetComponent<ShipBase>();

            _view.RPC(nameof(SyncShip), RpcTarget.AllBufferedViaServer, ship.View.ViewID, JsonConvert.SerializeObject(save));

            ship.transform.localScale = scale == Vector3.zero ?
                _baseShipPrefab.transform.localScale
                : scale;

            var _t = ship.transform;

            var modules = new List<ModuleBase>();
            foreach (var module in save.Modules)
            {
                var m = Instantiate(_database.Database[module.Id], _t, false);
                m.transform.localPosition = new Vector3(module.Position.x, module.Position.y, 0);

                modules.Add(m);
                m.Ship = ship;
            }

            ship.SetModules(modules.ToArray());

            return ship;
        }

        [PunRPC]
        private void SyncShip(int viewId, string saveString)
        {
            var view = PhotonNetwork.GetPhotonView(viewId);

            if (view.AmOwner) return;

            var save = JsonConvert.DeserializeObject<ShipSave>(saveString);
            var _t = view.transform;
            foreach (var module in save.Modules)
            {
                var m = Instantiate(_database.Database[module.Id], _t, false);
                m.transform.localPosition = new Vector3(module.Position.x, module.Position.y, 0);
            }
        }
    }
}
