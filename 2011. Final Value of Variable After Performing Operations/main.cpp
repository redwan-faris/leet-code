
#include <bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int result = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][1] == '+')
            result++;
        else
            result--;
    }
    return result;
}
