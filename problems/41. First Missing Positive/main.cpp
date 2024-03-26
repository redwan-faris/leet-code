
#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    set<long long> numbersSets;
    long long result = 4294967296;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
            numbersSets.insert(nums[i]);
    }
    long long i = 1;
    while (true)
    {
        if (numbersSets.find(i) != numbersSets.end())
        {
            i++;
        }
        else
        {
            result = i;
            break;
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
        int n, m;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << firstMissingPositive(arr) << endl;
    }
    return 0;
}