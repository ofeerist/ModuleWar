using Photon.Pun;
using System;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Utility
{
    public class DynamicPool<T> where T : PooledItem
    {
        private readonly Queue<T> _available;
        private readonly T _prefab;
        private readonly Transform _parent;

        public DynamicPool(T prefab, int count, Transform parent = null)
        {
            _available = new Queue<T>();
            _prefab = prefab;
            _parent = parent;

            for (int i = 0; i < count; i++)
                AddEntityToPool();          
        }

        public void AddEntityToPool()
        {
            var entity = Object.Instantiate(_prefab, _parent);
            entity.gameObject.SetActive(false);
            entity.OnDestroy += item => _available.Enqueue(item as T);
            _available.Enqueue(entity);
        }

        public void Instantiate(out T instantiateEntity, Vector3 position, Quaternion rotation)
        {
            if (_available.Count > 0)
            {
                instantiateEntity = _available.Dequeue();
                instantiateEntity.transform.SetPositionAndRotation(position, rotation);
                instantiateEntity.gameObject.SetActive(true);
                return;
            }

            AddEntityToPool();
            Instantiate(out instantiateEntity, position, rotation);
        }

        public void NetInstantiate(string name, out T instantiateEntity, Vector3 position, Quaternion rotation)
        {
            if (_available.Count > 0)
            {
                instantiateEntity = _available.Dequeue();
                instantiateEntity.transform.SetPositionAndRotation(position, rotation);
                instantiateEntity.gameObject.SetActive(true);
                return;
            }

            AddEntityToPool();
            instantiateEntity = PhotonNetwork.Instantiate(name, position, rotation).GetComponent<T>();
        }
    }

    public abstract class PooledItem : MonoBehaviour
    {
        public event Action<PooledItem> OnDestroy;

        protected void ReturnToPool()
        {
            gameObject.SetActive(false);
            OnDestroy?.Invoke(this);
        }
    }
}
