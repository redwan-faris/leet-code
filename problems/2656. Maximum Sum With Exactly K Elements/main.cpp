
#include <bits/stdc++.h>
using namespace std;

int maximizeSum(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int index = nums.size() - 1;
    int result = 0;
    while (k > 0)
    {
        result += nums[index];
        nums[index] += 1;
        k--;
    }
    return result;
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
        cout << maximizeSum(arr, k) << endl;
    }
    return 0;
}