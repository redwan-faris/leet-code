#include <bits/stdc++.h>
using namespace std;

string makeGood(string s)
{
    if (s.empty())
    {
        return ""; // Return empty string if input is empty
    }

    stack<char> stk;
    stk.push(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (!stk.empty() && abs(s[i] - stk.top()) == 32)
        {
            stk.pop();
        }
        else
        {
            stk.push(s[i]);
        }
    }

    string result = "";
    while (!stk.empty())
    {
        result = stk.top() + result;
        stk.pop();
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
        cout << makeGood(word) << endl;
    }
    return 0;
}