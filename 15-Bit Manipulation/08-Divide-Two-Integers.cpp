#include <bits/stdc++.h>
using namespace std;

int Division(int dividend, int divisor)
{
    int result = 0;

    while (dividend >= divisor)
    {
        int temp = divisor;
        int count = 1;
        while (temp <= dividend)
        {
            temp <<= 1;
            count <<= 1;
        }
        result = result + (count >> 1);
        dividend = dividend - (temp >> 1);
    }

    // check if the result should be negative
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    return (sign * result);
}

int main()
{
    int divisor, dividend;

    cin >> dividend >> divisor;

    cout << Division(dividend, divisor);
    return 0;
}