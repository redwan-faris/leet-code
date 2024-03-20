
#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{
    set<char> alpha;
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha.insert(sentence[i]);
    }
    if (alpha.size() == 26)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string sentence;
        cin >> sentence;
        cout << checkIfPangram(sentence);
    }
    return 0;
}