

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
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
        vector<int> result = twoSum(arr, k);

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << endl;
        }
    }
    return 0;
}
