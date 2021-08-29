// Copying the set bits of y into x in the given range

#include <bits/stdc++.h>
using namespace std;

int setSetBit(int x, int y, int l, int r)
{
    int mask = (1 << (r - l + 1));

    mask--;
    mask = (mask << (l - 1));

    mask = mask & y;

    x = x | mask;

    return x;
}

int main()
{
    int x, y, r, l;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter left position: ";
    cin >> l;

    cout << "Enter right position: ";
    cin >> r;

    cout << setSetBit(x, y, l, r);

    return 0;
}
