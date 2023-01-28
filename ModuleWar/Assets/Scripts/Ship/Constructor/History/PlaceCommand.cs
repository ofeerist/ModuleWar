namespace Assets.Scripts.Ship.Constructor.History
{
    public class PlaceCommand : ICommand<ConstructorInput>
    {
        private ConstructorInput _input;
        public PlaceCommand(ConstructorInput input)
        {
            _input = input;
        }
        public ConstructorInput Do()
        {
            _input.Placer.InstantiateModule(_input.CellPosition, _input.Module);

            return _input;
        }

        public ConstructorInput Undo()
        {
            _input.Placer.DestroyModule(_input.CellPosition);

            return _input;
        }
    }
}
