#include <bits/stdc++.h>
using namespace std;

int pivotInteger(int n)
{

    std::vector<int> prefix(n);

    std::vector<int> postfix(n);

    prefix[0] = 1;

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + i + 1;
    }

    postfix[0] = n;
    for (int i = 1; i < n; i++)
    {
        postfix[i] = postfix[i - 1] + (n - i);
    }

    int i = 0;
    int j = n - 1;
    while (i < n)
    {
        if (prefix[i] == postfix[j])
        {
            return i + 1;
        }
        i++;
        j--;
    }
    return -1;
}

int main()
{

    int t;
    cin >> t;
    while (--t)
    {
        int n;
        cin >> n;
        cout << pivotInteger(n);
    }
}
