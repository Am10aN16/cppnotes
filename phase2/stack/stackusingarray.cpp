#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = val;
        }
        else
        {
            cout << "Stck overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if (top >= 0)
        {
            return false;
        }
        else
            return true;
    }
};

int main()
{

    Stack st(5);
    st.push(22);
    st.push(42);
    st.push(56);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if (st.empty())
    {
        cout << "Stack is empty brother" << endl;
    }
    else
    {
        cout << "Stack is not empty brother" << endl;
    }

    return 0;
}