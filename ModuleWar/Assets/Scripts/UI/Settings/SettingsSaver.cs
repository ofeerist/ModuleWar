using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace Assets.Scripts.UI.Settings
{
    internal class SettingsSaver : MonoBehaviour
    {
        private readonly List<ISettingPoint> _points = new();

        private static readonly string _filePath = $"{Application.streamingAssetsPath}/Settings.json";

        private void Start()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                var child = transform.GetChild(i);
                if (!child.TryGetComponent<ISettingPoint>(out var point)) continue;

                _points.Add(point);
            }

            Load();
        }

        public void Load()
        {
            SettingsSave save = new();

            if (File.Exists(_filePath))
                save = JsonUtility.FromJson<SettingsSave>(File.ReadAllText(_filePath));

            save.Init();

            foreach (var point in _points)
            {
                if (!save.Save.ContainsKey(point.Id)) continue;

                point.Load(save.Save[point.Id]);
            }
        }

        public void Save()
        {
            var save = new SettingsSave();

            foreach (var point in _points)
            {
                save.Ids.Add(point.Id);
                save.Objects.Add(point.Save().ToString());
            }

            var json = JsonUtility.ToJson(save);
            File.WriteAllText(_filePath, json);
        }
    }

    [System.Serializable]
    public class SettingsSave
    {
        public Dictionary<int, object> Save = new();

        public List<int> Ids = new();
        public List<string> Objects = new();

        public void Init()
        {
            for (int i = 0; i < Ids.Count; i++)
            {
                Save.Add(Ids[i], Objects[i]);
            }
        }
    }
}
