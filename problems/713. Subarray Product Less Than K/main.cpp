#include <iostream>
#include <vector>
using namespace std;

int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    if (k <= 1)
        return 0;
    int product = 1;
    int left = 0;
    int counter = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        product *= nums[right];
        while (product >= k)
        {
            product /= nums[left];
            left++;
        }
        counter += (right - left + 1);
    }

    return counter;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << numSubarrayProductLessThanK(nums, k);

    return 0;
}
