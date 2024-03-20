#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int counter = 0;

    int i = 0;
    int j = 0;
    set<char> hash;
    while (i < s.size() && j < s.size())
    {
        if (hash.find(s[j]) == hash.end())
        {
            hash.insert(s[j]);
            j++;
            counter = max(counter, j - i);
        }
        else
        {
            hash.erase(s[i]);
            i++;
        }
    }
    return counter;
}

int main()
{

    int t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << lengthOfLongestSubstring(s);
    }

    return 0;
}