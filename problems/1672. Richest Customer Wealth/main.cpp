
#include <bits/stdc++.h>
using namespace std;

int maximumWealth(std::vector<std::vector<int>> &accounts)
{
    int maxWealth = 0;
    for (const auto &customerAccounts : accounts)
    {
        int wealth = 0;
        for (int account : customerAccounts)
        {
            wealth += account;
        }
        maxWealth = std::max(maxWealth, wealth);
    }
    return maxWealth;
}