
#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &nums, int k)
{
    class Solution
    {
    public:
        long long countSubarrays(vector<int> &nums, int k)
        {
            long long int max_num = *max_element(nums.begin(), nums.end()), count = 0;
            long long int left = 0, right = 0, ans = 0;
            while (right < nums.size())
            {
                if (nums[right] == max_num)
                    count++;

                while (count >= k)
                {
                    if (nums[left] == max_num)
                        count--;
                    left++;
                    ans += nums.size() - right;
                }
                right++;
            }

            return ans;
        }
    };
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << countSubarrays(arr, k);
    }
    return 0;
}