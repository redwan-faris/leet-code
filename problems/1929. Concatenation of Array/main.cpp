#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; ++i)
    {
        ans[i] = ans[i + n] = nums[i];
    }

    return ans;
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
        vector<int> result = getConcatenation(arr);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }
    }
    return 0;
}