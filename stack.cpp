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

    void push(int x)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = x;
            cout << x << " pushed" << endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            int temp = arr[top];
            top--;
            cout << temp << " popped" << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }

    bool isfull()
    {
        if (top == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int peek()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    Stack st(5);

    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(1);
    cout << st.isfull() << endl;
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.isempty() << endl;
}