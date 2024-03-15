
#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack[0] == needle[0] && haystack.size() == 1 && needle.size() == 1)
        return 0;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < haystack.size())
    {

        if (haystack[i] == needle[j])
        {
            j++;
            i++;
        }
        else
        {
            cout << k;
            j = 0;
            k++;
            i = k;
        }

        if (j == needle.size())
            return k;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h;
        string n;
        cin >> h;
        cin >> n;
        cout << strStr(h, n);
    }

    return 0;
}