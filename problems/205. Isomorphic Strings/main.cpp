#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, char> s_to_t_mapping;
    unordered_map<char, char> t_to_s_mapping;

    for (int i = 0; i < s.length(); ++i)
    {
        char s_char = s[i];
        char t_char = t[i];

        if (s_to_t_mapping.find(s_char) == s_to_t_mapping.end())
        {
            s_to_t_mapping[s_char] = t_char;
        }
        else
        {
            if (s_to_t_mapping[s_char] != t_char)
                return false;
        }

        if (t_to_s_mapping.find(t_char) == t_to_s_mapping.end())
        {
            t_to_s_mapping[t_char] = s_char;
        }
        else
        {
            if (t_to_s_mapping[t_char] != s_char)
                return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        cout << isIsomorphic(s, t);
    }
    return 0;
}