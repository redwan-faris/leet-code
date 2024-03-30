#include <bits/stdc++.h>
using namespace std;

int subarraysWithKDistinct(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> freqMap1, freqMap2;
    int left1 = 0, left2 = 0, count = 0;

    for (int right = 0; right < n; ++right)
    {
        freqMap1[nums[right]]++;
        freqMap2[nums[right]]++;

        while (freqMap1.size() > k)
        {
            if (--freqMap1[nums[left1]] == 0)
            {
                freqMap1.erase(nums[left1]);
            }
            left1++;
        }

        while (freqMap2.size() >= k)
        {
            if (--freqMap2[nums[left2]] == 0)
            {
                freqMap2.erase(nums[left2]);
            }
            left2++;
        }

        count += left2 - left1;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        vector<int> arr(n);
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << subarraysWithKDistinct(arr, k) << endl;
    }
}