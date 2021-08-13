#include <bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(int a[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return make_pair(min, max);
}

int main()
{
    int n;
    cin >> n;
    int a[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pair<int, int> pp = getMinMax(a, n);
    cout << pp.first << " " << pp.second << endl;
    return 0;
}