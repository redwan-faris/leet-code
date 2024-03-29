#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int smallestDifference = numeric_limits<int>::max();
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {

            int targetDiff = target - nums[i] - nums[left] - nums[right];
            if (targetDiff == 0)
            {
                return target;
            }

            if (abs(targetDiff) < abs(smallestDifference) ||
                (abs(targetDiff) == abs(smallestDifference) &&
                 targetDiff > smallestDifference))
            {
                smallestDifference = targetDiff;
            }

            if (targetDiff > 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return target - smallestDifference;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        vector<int> arr(n);
        cin >> n, target;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << threeSumClosest << endl;
    }
}