
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int result = 0;
    int i = 0;
    int j = height.size() - 1;

    while (i < j)
    {
        if (height[i] < height[j])
        {
            result = max(result, height[i] * (j - i));
            i++;
        }
        else if (height[i] >= height[j])
        {
            result = max(result, height[j] * (j - i));
            j--;
        }
    }
    return result;
}