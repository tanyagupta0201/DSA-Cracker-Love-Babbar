/*

    1. Calculate XOR of a and b.
    2. Count the set bits in the above calculated XOR result.

*/

#include <bits/stdc++.h>
using namespace std;

int Flipped_Bits(int a, int b)
{
    int n = a ^ b;

    int count = 0;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Number of bits to be flipped to convert a to b: " << Flipped_Bits(a, b) << endl;

    return 0;
}