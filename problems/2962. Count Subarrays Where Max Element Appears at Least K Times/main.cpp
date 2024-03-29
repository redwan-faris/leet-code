
#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &nums, int k)
{

    int maxNum = -1;
    int count = 0;
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        maxNum = max(nums[i], maxNum);
    }
    int i = 0;
    int j = 0;
    while (j < nums.size())
    {
        if (nums[j] == maxNum)
            count++;
        if (count >= k)
            count = count + (j - i + 1);
        while (count >= k && i <= j)
        {
            if (nums[i] == maxNum)
                count--;
            i++;
        }
        result = max(count, result);
        j++;
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

        cout << countSubarrays(arr, k);
    }
    return 0;
}