
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (val != nums[i])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}