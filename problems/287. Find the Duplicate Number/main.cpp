
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    set<int> numSet;
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (numSet.find(nums[i]) != numSet.end())
        {
            result = nums[i];
            break;
        }
        else
        {
            numSet.insert(nums[i]);
        }
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findDuplicate(arr) << endl;
    }
    return 0;
}
