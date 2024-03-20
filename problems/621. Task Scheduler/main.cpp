

#include <bits/stdc++.h>
using namespace std;

int leastInterval(vector<char> &tasks, int n)
{
    unordered_map<char, int> taskCounts;

    for (char task : tasks)
        taskCounts[task]++;

    int maxFrequency = 0;
    int maxCount = 0;

    for (auto &entry : taskCounts)
    {
        if (entry.second > maxFrequency)
        {
            maxFrequency = entry.second;
            maxCount = 1;
        }
        else if (entry.second == maxFrequency)
        {
            maxCount++;
        }
    }

    int idleTime = (maxFrequency - 1) * (n - (maxCount - 1));
    int availableSlots = idleTime + maxFrequency * maxCount;

    return max((int)tasks.size(), availableSlots);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> m;

        vector<char> tasks(m);
        for (int i = 0; i < m; ++i)
            cin >> tasks[i];

        cin >> n;

        cout << leastInterval(tasks, n);
    }

    return 0;
}