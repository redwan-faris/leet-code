#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> result(n * 2);
    int i = 0;
    int j = n;
    int k = 0;
    while (i < n)
    {
        result[k] = nums[i];
        result[k + 1] = nums[j];
        i++;
        j++;
        k += 2;
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
        vector<int> result = shuffle(arr, m);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }
    }
    return 0;
}