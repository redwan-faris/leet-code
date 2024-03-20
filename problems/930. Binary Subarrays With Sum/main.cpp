
#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int> &nums, int goal)
{
    int count = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    for (; i < nums.size(); ++i)
    {
        sum += nums[i];
        while (j < i && sum > goal)
        {
            sum -= nums[j];
            j++;
        }
        if (sum == goal)
        {
            count++;
            int k = j;
            while (k < i && nums[k] == 0)
            {
                count++;
                k++;
            }
        }
    }
    return count;
}