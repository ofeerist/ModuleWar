

using System;
using System.Collections.Generic;

public class UndoRedoStack<T>
{
    private Stack<ICommand<T>> _Undo;
    private Stack<ICommand<T>> _Redo;

    public event Action StacksChanged;

    public int UndoCount
    {
        get
        {
            return _Undo.Count;
        }
    }
    public int RedoCount
    {
        get
        {
            return _Redo.Count;
        }
    }

    public UndoRedoStack()
    {
        Reset();
    }
    public void Reset()
    {
        _Undo = new Stack<ICommand<T>>();
        _Redo = new Stack<ICommand<T>>();

        StacksChanged?.Invoke();
    }



    public T Do(ICommand<T> cmd, T input)
    {
        T output = cmd.Do();
        _Undo.Push(cmd);
        _Redo.Clear(); // Once we issue a new command, the redo stack clears

        StacksChanged?.Invoke();

        return output;
    }
    public T Undo(T input)
    {
        if (_Undo.Count > 0)
        {
            ICommand<T> cmd = _Undo.Pop();
            T output = cmd.Undo();
            _Redo.Push(cmd);

            StacksChanged?.Invoke();

            return output;
        }
        else
        {
            return input;
        }
    }
    public T Redo(T input)
    {
        if (_Redo.Count > 0)
        {
            ICommand<T> cmd = _Redo.Pop();
            T output = cmd.Do();
            _Undo.Push(cmd);

            StacksChanged?.Invoke();

            return output;
        }
        else
        {
            return input;
        }
    }


}