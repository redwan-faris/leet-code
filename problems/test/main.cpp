
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int result = 0;
    bool isNeg = x < 0;
    x = abs(x);

    while (x != 0)
    {
        int carry = x % 10;
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && carry > 7))
        {
            return 0;
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && carry < -8))
        {
            return 0;
        }
        result = result * 10 + carry;
        x = x / 10;
    }

    return isNeg ? -result : result;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        cout << reverse(x) << endl;
    }

    return 0;
}
