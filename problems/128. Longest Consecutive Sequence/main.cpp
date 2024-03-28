/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> nums)
{
    map<int, int> order;
    int result = -1;
    int counter = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        order[nums[i]] = nums[i];
    }
    int current = order.begin()->first;
    for (auto i = order.begin(); i != order.end(); i++)
    {

        if (i->first == current + 1)
        {
            counter++;
        }
        else
        {
            result = max(counter, result);
            counter = 0;
        }
        result = max(counter, result);
        current = i->first;
    }
    return result + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
    }

    return 0;
}
