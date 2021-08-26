// DNF Sort

#include <bits/stdc++.h>
using namespace std;

void dnf_sort(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    // Iterate till all the elements are sorted
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        if (a[mid] == 1)
        {
            mid++;
        }
        if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main()
{
    int a[] = {0, 1, 2, 1, 1, 0, 2, 1, 2, 2, 0, 1, 1, 2};
    int n = sizeof(a) / sizeof(int);

    // Iterate and print every element
    cout << "Array before DNF sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    dnf_sort(a, n);

    // Iterate and print every element
    cout << "Array after DNF sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}