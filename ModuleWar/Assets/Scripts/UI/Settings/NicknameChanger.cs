using System.Text.RegularExpressions;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.Localization;

namespace Assets.Scripts.UI.Settings
{
    internal class NicknameChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private TMP_InputField _field;
        [SerializeField] private ErrorThrower _thrower;

        [Space]

        [SerializeField] private string _defaultNick;
        private readonly string _nickPattern = new(@"[A-Za-z0-9]");

        [SerializeField] private LocalizedString _invalidLenght;
        [SerializeField] private LocalizedString _invalidCharacters;

        [Space]

        [SerializeField] private int _id;
        int ISettingPoint.Id { get => _id; }

        private void Start()
        {
            _field.onValueChanged.AddListener((str) =>
            {
                _thrower.ToTransparent();
                UpdateData();
            });
        }

        private string ValidateNick(string nick)
        {
            var len = nick.Length;

            if (len <= 3 || len >= 15)
            {
                _thrower.ThrowError(_invalidLenght.GetLocalizedString());
                return _defaultNick;
            }

            if (!Regex.Match(nick, _nickPattern).Success)
            {
                _thrower.ThrowError(_invalidCharacters.GetLocalizedString());
                return _defaultNick;
            }

            return nick;
        }

        public void Load(object value)
        {
            _field.text = ValidateNick(System.Convert.ToString(value));
        }

        public object Save()
        {
            _field.text = ValidateNick(_field.text);

            return _field.text;
        }

        public void UpdateData()
        {
            ValidateNick(_field.text);
        }
    }
}
