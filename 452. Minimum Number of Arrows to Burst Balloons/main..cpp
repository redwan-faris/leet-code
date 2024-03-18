
#include <bits/stdc++.h>

using namespace std;

int findMinArrowShots(vector<vector<int>> &points)
{
    if (points.empty())
        return 0;
    sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[1] < b[1]; });

    int k = 1;
    int end = points[0][1];

    for (int i = 1; i < points.size(); ++i)
    {
        if (points[i][0] > end)
        {
            ++k;
            end = points[i][1];
        }
    }

    return k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(2));
        vector<int> newInterval(2);
        for (int i = 0; i < n; ++i)
        {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        cin >> newInterval[0] >> newInterval[1];
        int result = findMinArrowShots(intervals);

        cout << result;
    }

    return 0;
}
