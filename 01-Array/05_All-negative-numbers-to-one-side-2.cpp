// Move all the negative numbers to the left side of the arrray and positive numbers to the right side of the array
// Partition Approach

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Pos_Neg(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != j)
            {
                swap(a[i], a[j]);
            }
            j++;
        }
    }
}

int main()
{
    int a[] = {-1, 2, -2, 3, 6, -5};
    int n = sizeof(a) / sizeof(int);

    Pos_Neg(a, n);
    display(a, n);
    return 0;
}