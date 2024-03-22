
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    vector<int> array(nums.size());
    array[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        int num = max(nums[i], nums[i] + array[i - 1]);
        array[i] = num;
    }
    int result = -100000;
    for (int i = 0; i < array.size(); i++)
    {
        result = max(result, array[i]);
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
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        cout << maxSubArray(nums) << endl;
    }
}