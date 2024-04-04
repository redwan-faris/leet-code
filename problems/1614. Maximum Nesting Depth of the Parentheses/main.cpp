#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{
    stack<char> stack;
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            stack.push(s[i]);
        else if (s[i] == ')')
        {
            if (result < stack.size())
                result = stack.size();
            stack.pop();
        };
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;

        cout << maxDepth(word) << endl;
    }
    return 0;
}