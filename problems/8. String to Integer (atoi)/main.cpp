
#include <bits/stdc++.h>
using namespace std;

int myAtoi(std::string s)
{
    int index = 0;
    long long result = 0;
    bool isNegative = false;

    while (s[index] == ' ')
    {
        index++;
    }

    if (s[index] == '-' || s[index] == '+')
    {
        isNegative = s[index] == '-';
        index++;
    }

    while (s[index] >= '0' && s[index] <= '9')
    {
        int digit = s[index] - '0';
        if (result > (std::numeric_limits<int>::max() - digit) / 10)
        {
            return isNegative ? std::numeric_limits<int>::min() : std::numeric_limits<int>::max();
        }
        result = result * 10 + digit;
        index++;
    }

    return isNegative ? -result : result;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);

        cout << myAtoi(s) << endl;
    }

    return 0;
}
