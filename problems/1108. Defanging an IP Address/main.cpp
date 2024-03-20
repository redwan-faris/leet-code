
#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    int addressSize = address.size();
    string result;
    for (int i = 0; i < addressSize; i++)
    {
        if (address[i] == '.')
        {
            result.push_back('[');
            result.push_back('.');
            result.push_back(']');
        }
        else
        {
            result.push_back(address[i]);
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ip;
        cin >> ip;
        cout << defangIPaddr(ip);
    }
    return 0;
}