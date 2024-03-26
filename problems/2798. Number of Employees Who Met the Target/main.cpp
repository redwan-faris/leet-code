#include <bits/stdc++.h>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
{
    int count = 0;
    for (int i = 0; i < hours.size(); i++)
    {
        if (hours[i] >= target)
            count++;
    }
    return count;
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
        cout << numberOfEmployeesWhoMetTarget(arr, m);
    }
    return 0;
}