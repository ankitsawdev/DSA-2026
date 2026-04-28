#include <iostream>
using namespace std;

class Stack
{

    int top;
    int *arr;
    int size;

public:
    Stack(int len)
    {
        top = -1;
        arr = new int[len];
        size = len;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "The stack is full" << endl;
            return;
        }

        top++;
        arr[top] = x;

        cout << "The element is inserted : " << x << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "The stack is empty" << endl;
            return;
        }

        cout << "The popped element is : " << arr[top] << endl;
        top--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "The stack is empty" << endl;
            return;
        }

        cout << "The top is element : " << arr[top] << endl;
    }

    void getSize()
    {
        if (top == -1)
        {
            cout << "The stack is empty\n";
        }

        cout << "The size of the stack is :" << top + 1 << endl;
    }

    void isEmpty()
    {
        if (top == -1)
        {
            cout << "The stack is empty.\n";
        }
        else
        {
            cout << "The stack is not empty\n";
        }
    }
};

int main()
{
    int length;
    cout << "Enter the length of the stack :";
    cin >> length;

    Stack st(length);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    st.peek();

    st.getSize();

    st.isEmpty();

    return 0;
}