public interface ICommand<T>
{
    T Do();
    T Undo();
}