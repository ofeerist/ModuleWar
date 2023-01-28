using Photon.Pun;
using Photon.Realtime;
using Ship.Module.Gyrodine;
using UnityEngine;

public class Launcher : MonoBehaviourPunCallbacks
{
    private string _gameVersion = "1";

    private void Start()
    {
        Connect();
    }

    public void Connect()
    {
        PhotonNetwork.ConnectUsingSettings();
        PhotonNetwork.GameVersion = _gameVersion;
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("OnConnectedToMaster() was called by PUN");
    }
}
