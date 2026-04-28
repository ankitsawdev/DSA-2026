#include <iostream>
using namespace std;

int trailingZeroes(int n)
{

    long long val = 1;

    for (int i = 2; i <= n; i++)
    {
        val *= i;
    }

    cout<<val<<endl;
    int count = 0;

    string str = to_string(val);
    int num = str.length();
    cout<<str[3]<<endl;
    cout<<num<<endl;
    for (int i = num-1; i >= 0; i--)
    {
        cout<<str[i]<<endl;
        if (str[i] == '0')
        {
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
}

int main()
{

    int result = trailingZeroes(5);
    cout << "The result is : " << result << endl;

    return 0;
}