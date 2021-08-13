#include <bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(int a[], int n)
{
    sort(a, a + n);
    int min = a[0];
    int max = a[n - 1];
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