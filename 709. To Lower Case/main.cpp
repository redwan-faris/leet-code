#include <iostream>
using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }

    return s;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string word;
        cin >> word;
        cout << toLowerCase(word);
    }
    return 0;
}