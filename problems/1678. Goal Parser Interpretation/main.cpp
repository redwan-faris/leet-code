
#include <bits/stdc++.h>
using namespace std;

string interpret(string command)
{
    string result;
    for (int i = 0; i < command.size() - 1; i++)
    {
        if (command[i] == '(')
        {
            if (command[i + 1] == ')')
            {
                result.push_back('o');
                i++;
            }
            else
            {
                result.push_back('a');
                result.push_back('l');
                i = i + 2;
            }
        }
        else
        {
            result.push_back('G');
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string command;
        cin >> command;
        cout << interpret(command);
    }
    return 0;
}