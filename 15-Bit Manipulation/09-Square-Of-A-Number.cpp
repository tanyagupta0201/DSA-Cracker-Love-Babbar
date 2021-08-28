/*
    odd number = 2 * x + 1
    It's square = 4 * (x ^ 2) + 4 * x + 1

    even number = 2 * x
    It's square = 4 * x ^ 2

*/

#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
    // Base Case
    if (n == 0)
        return 0;

    if (n < 0)
        n = -n;

    int x = n >> 1;

    if (n & 1)
    {
        // If number is odd
        return ((square(x) << 2) + (x << 2) + 1);
    }
    else
    {
        // If number is even
        return (square(x) << 2);
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The square of " << n << " is " << square(n);

    return 0;
}