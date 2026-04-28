#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s)
{
    if (!s.empty())
    {
        int top = s.top();
        cout << "The top is  : " << top << endl;

        s.pop();

        reverse(s);
        cout << "hi" << endl;

        stack<int> temp;

        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }

        s.push(top);

        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
}

int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //   while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    reverse(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}