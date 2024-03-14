
#include <bits/stdc++.h>
using namespace std;

string decodeMessage(const string &key, const string &message)
{
    unordered_map<char, char> substitutionTable;
    int index = 0;
    for (char ch : key)
    {
        if (isalpha(ch) && substitutionTable.find(tolower(ch)) == substitutionTable.end())
        {
            substitutionTable[tolower(ch)] = 'a' + index;
            index++;
        }
    }

    string decodedMessage = "";
    for (char ch : message)
    {
        if (ch == ' ')
        {
            decodedMessage += ' ';
        }
        else if (isalpha(ch))
        {
            char lowercaseCh = tolower(ch);
            if (substitutionTable.find(lowercaseCh) != substitutionTable.end())
            {
                char decodedCh = substitutionTable[lowercaseCh];
                if (isupper(ch))
                {
                    decodedCh = toupper(decodedCh);
                }
                decodedMessage += decodedCh;
            }
        }
    }

    return decodedMessage;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string key;
        string message;
        cin >> key;
        cin >> message;
        cout << decodeMessage(key, message);
    }
    return 0;
}