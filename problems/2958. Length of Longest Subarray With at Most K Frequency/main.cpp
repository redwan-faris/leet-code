

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayLength(vector<int> &nums, int k)
{
    int i = 0;
    int j = 0;
    int counter = 0;
    unordered_map<string, int> myMap;

    while (j < nums.size())
    {
        myMap[to_string(nums[j])] = myMap[to_string(nums[j])] + 1;

        while (myMap[to_string(nums[j])] > k)
        {
            myMap[to_string(nums[i])] = myMap[to_string(nums[i])] - 1;
            i++;
        }
        counter = max(counter, j - i + 1);
        j++;
    }

    return counter;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << maxSubarrayLength(arr, k) << endl;
    }
    return 0;
}