

#include <bits/stdc++.h>
using namespace std;
int mostWordsFound(vector<string> &sentences)
{
    int result = 0;
    for (int i = 0; i < sentences.size(); i++)
    {
        int length = 0;
        string sent = sentences[i];
        for (int j = 0; j < sent.size(); j++)
        {
            if (sent[j] == ' ')
                length++;
        }
        if (result < length)
            result = length;
    }
    return result + 1;
}