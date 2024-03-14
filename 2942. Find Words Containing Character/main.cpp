#include <bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x)
{
    vector<int> result;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (x == words[i][j])
            {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}