using System;
using System.Collections.Generic;
using UnityEngine;

namespace FSM
{
    public class BaseStateMachine : MonoBehaviour
    {
        [SerializeField] private BaseState _initialState;
        private readonly Dictionary<Type, Component> _cachedComponents = new();
        private void Awake()
        {
            CurrentState = _initialState;
        }

        public BaseState CurrentState { get; set; }

        private void Update()
        {
            CurrentState.Execute(this);
        }

        public new T GetComponent<T>() where T : Component
        {
            if (_cachedComponents.ContainsKey(typeof(T)))
                return _cachedComponents[typeof(T)] as T;

            var component = base.GetComponent<T>();
            if (component != null)
            {
                _cachedComponents.Add(typeof(T), component);
            }
            return component;
        }
    }
}