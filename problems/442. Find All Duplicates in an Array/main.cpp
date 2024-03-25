
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    set<int> mySet;

    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mySet.find(nums[i]) != mySet.end())
        {
            result.push_back(nums[i]);
        }
        else
        {
            mySet.insert(nums[i]);
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> result = findDuplicates(arr);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }
    }
}