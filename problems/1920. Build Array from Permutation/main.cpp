#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = nums[nums[i]];
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
        {
            cin >> nums[i];
        }
        vector<int> result = buildArray(nums);
        for (int i = 0; i < nums.size(); i++)
        {
            cout << result[i];
        }
    }
    return 0;
}