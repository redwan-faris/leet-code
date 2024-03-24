#include <bits/stdc++.h>
using namespace std;

int search(std::vector<int> &nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << search(arr, m) << endl;
    }
    return 0;
}