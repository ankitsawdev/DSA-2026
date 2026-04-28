#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedListStack
{

private:
    Node *head;
    int size;

public:
    LinkedListStack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *element = new Node(x);

        element->next = head;
        head = element;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }

        int value = head->val;
        head = head->next;
        size--;

        return value;
    }

    int top()
    {
        if (head == NULL)
        {
            return -1;
        }

        return head->val;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{

    LinkedListStack st;

    // List of commands
    vector<string> commands = {"LinkedListStack", "push", "push",
                               "pop", "top", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i)
    {
        if (commands[i] == "push")
        {
            st.push(inputs[i][0]);
            cout << "null ";
        }
        else if (commands[i] == "pop")
        {
            cout << st.pop() << " ";
        }
        else if (commands[i] == "top")
        {
            cout << st.top() << " ";
        }
        else if (commands[i] == "isEmpty")
        {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        }
        else if (commands[i] == "LinkedListStack")
        {
            cout << "null ";
        }
    }

    return 0;
}