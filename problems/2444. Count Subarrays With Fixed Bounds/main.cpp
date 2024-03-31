
#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &nums, int minK, int maxK)
{
    long long count = 0;
    int lastMaxKIndex = -1, lastMinKIndex = -1;
    int size = nums.size();

    for (int right = 0, left = 0; right < size; right++)
    {
        int num = nums[right];
        if (num < minK || num > maxK)
        {
            left = right + 1;
            continue;
        }
        if (num == maxK)
        {
            lastMaxKIndex = right;
        }
        if (num == minK)
        {
            lastMinKIndex = right;
        }
        count += max((min(lastMaxKIndex, lastMinKIndex) - left + 1), 0);
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, kMin, kMax;
        vector<int> arr(n);
        cin >> n >> kMin, kMax;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << countSubarrays(arr, kMin, kMax) << endl;
    }
}
