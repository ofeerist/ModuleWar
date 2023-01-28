using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ConstructorRoomCreator : MonoBehaviourPunCallbacks
{

    private void Start()
    {
        ConnectToRoom();
    }

    public void ConnectToRoom()
    {
        PhotonNetwork.CreateRoom("Constructor", new RoomOptions { MaxPlayers = 1 });
    }

    public void DisconnectFromRoom()
    {
        PhotonNetwork.LeaveRoom();

        Destroy(GameObject.Find("LobbyCreator"));
        Destroy(GameObject.Find("ArenaCreator"));
    }
}
