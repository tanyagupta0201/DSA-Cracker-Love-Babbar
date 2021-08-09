// Reverse the array
// Time Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

void Reverse(int a[], int n)
{
    int start = 0, end = n - 1;

    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main()
{
    int a[] = {1, 21, 8, 9, 3, 1, 19, 55, 15, 45, 23};
    int n = sizeof(a) / sizeof(int);

    Reverse(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}