// Reverse the array
// Time Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 21, 8, 9, 3, 1, 19, 55, 15, 45, 23};
    int n = sizeof(a) / sizeof(int);

    reverse(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}