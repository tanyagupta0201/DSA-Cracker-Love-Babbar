#include <bits/stdc++.h>
using namespace std;

int TotalBits(int n)
{
    int temp, c = 0;

    for (int i = 1; i <= n; i++)
    {
        temp = i;

        while (temp > 0)
        {
            temp = temp & (temp - 1);
            c++;
        }
    }

    return c;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << TotalBits(n) << endl;
    return 0;
}