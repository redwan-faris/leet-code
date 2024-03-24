/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
        findDuplicate(arr);
    }
    return 0;
}
