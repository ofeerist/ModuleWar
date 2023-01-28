namespace Assets.Scripts.Ship.Constructor.History
{
    public class DestroyCommand : ICommand<ConstructorInput>
    {
        private ConstructorInput _input;
        public DestroyCommand(ConstructorInput input)
        {
            _input = input;
        }
        public ConstructorInput Do()
        {
            _input.Placer.DestroyModule(_input.CellPosition);

            return _input;
        }

        public ConstructorInput Undo()
        {
            _input.Placer.InstantiateModule(_input.CellPosition, _input.Module);

            return _input;
        }
    }
}
