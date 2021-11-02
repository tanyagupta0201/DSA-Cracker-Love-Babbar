// Using C++ STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> n >> x;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        /* a is subtracted to get the index otherwise we will get an iterator */
        int lower = lower_bound(a, a + n, x) - a;
        int upper = upper_bound(a, a + n, x) - a - 1;

        if (lower == n)
        {
            cout << "-1\n";
        }
        else
        {
            cout << lower << " " << upper << endl;
        }
    }

    return 0;
}