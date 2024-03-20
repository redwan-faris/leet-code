
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    if (s.length() % 2 != 0)
        return false;

    unordered_map<char, char> bracketPairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}};

    stack<char> stack;

    for (char c : s)
    {
        if (bracketPairs.find(c) != bracketPairs.end())
        {
            if (stack.empty() || stack.top() != bracketPairs[c])
                return false;
            stack.pop();
        }
        else
        {
            stack.push(c);
        }
    }

    return stack.empty();
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cout << "Enter a string containing parentheses: ";
        getline(cin, input);

        cout << isValid(input);
    }

    return 0;
}
