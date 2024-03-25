#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxNumber = 0;
    vector<bool> result(candies.size());
    for (int i = 0; i < candies.size(); i++)
    {
        maxNumber = max(maxNumber, candies[i]);
    }
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extraCandies >= maxNumber)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }
    return result;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<bool> result = kidsWithCandies(arr, m);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }
    }
    return 0;
}