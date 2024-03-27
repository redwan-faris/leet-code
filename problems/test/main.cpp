

#include <bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int> &gain)
{
    int highest = 0;
    int currentAltitues = 0;
    for (int i = 0; i < gain.size(); i++)
    {
        currentAltitues = currentAltitues + gain[i];
        highest = max(currentAltitues, highest);
    }
    return highest;
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
        cout << largestAltitude(arr) << endl;
    }
    return 0;
}