

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    vector<vector<int>> result;
    int i = 0;

    while (i < intervals.size() && intervals[i][1] < newInterval[0])
    {
        result.push_back(intervals[i]);
        i++;
    }

    while (i < intervals.size() && intervals[i][0] <= newInterval[1])
    {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }

    result.push_back(newInterval);
    while (i < intervals.size() && intervals[i][0] > newInterval[1])
    {
        result.push_back(intervals[i]);
        i++;
    }

    return result;
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
        vector<vector<int>> result = insert(intervals, newInterval);
        for (auto &interval : result)
        {
            cout << "[" << interval[0] << "," << interval[1] << "] ";
        }
    }

    return 0;
}
