
#include <bits/stdc++.h>

using namespace std;

int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> count;
    int maxLength = 0;
    int balance = 0;
    count[0] = -1;

    for (int i = 0; i < nums.size(); ++i)
    {
        balance += (nums[i] == 0) ? -1 : 1;
        if (count.find(balance) != count.end())
        {
            maxLength = max(maxLength, i - count[balance]);
        }
        else
        {
            count[balance] = i;
        }
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {0, 1, 1, 0, 1, 1, 0};
    cout << findMaxLength(nums) << endl;
    return 0;
}
