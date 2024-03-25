#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int count = 0;
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        if (nums[left] + nums[right] > target)
        {

            count += right - left;
            right--;
        }
        else
        {

            left++;
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n, m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << countPairs(arr, m);
    }
    return 0;
}