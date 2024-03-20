#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{

    int counter = 0;
    size_t end = s.find_last_not_of(" \t\n\r");
    s = (end == std::string::npos) ? "" : s.substr(0, end + 1);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            counter++;
        else
            counter = 0;
    }
    return counter;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
    }

    return 0;
}