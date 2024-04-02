#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(std::vector<int> &digits)
{
    int n = digits.size();
    for (int i = n - 1; i >= 0; --i)
    {
        digits[i] += 1;
        if (digits[i] == 10)
        {
            digits[i] = 0;
        }
        else
        {
            return digits;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> result = plusOne(arr);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }
    }
    return 0;
}