#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> numIndex;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (numIndex.find(nums[i]) != numIndex.end() && i - numIndex[nums[i]] <= k)
        {
            return true;
        }
        numIndex[nums[i]] = i;
    }

    return false;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        cin >> k;

        cout << containsNearbyDuplicate(nums, k) << endl;
    }

    return 0;
}
