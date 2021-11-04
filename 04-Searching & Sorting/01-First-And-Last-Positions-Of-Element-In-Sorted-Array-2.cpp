// Using Binary Search

#include <bits/stdc++.h>
using namespace std;

int FindIndex(int a[], int n, int x, int key)
{
    int low = 0, high = n - 1, ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] < x)
        {
            low = mid + 1;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;

            if (key == -1)
                high = mid + key; // going to the previous index
            else
                low = mid + key; // going to the next index
        }
    }
    return ans;
}

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

        int lower = FindIndex(a, n, x, -1);
        int upper = FindIndex(a, n, x, 1);

        if (lower == n)
        {
            // if element is not present
            cout << "-1\n";
        }
        else
        {
            cout << lower << " " << upper << endl;
        }
    }

    return 0;
}