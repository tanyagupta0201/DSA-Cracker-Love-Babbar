#include <bits/stdc++.h>
using namespace std;

void Display(int a[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// Without using STL
void RotateClockwise(int a[20][20], int n)
{
    // To take Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    // Reverse each row
    for (int row = 0; row < n; row++)
    {
        int Start_Col = 0, End_Col = n - 1;
        while (Start_Col < End_Col)
        {
            swap(a[row][Start_Col], a[row][End_Col]);
            Start_Col++;
            End_Col--;
        }
    }
}

// Using STL
void Rotate_STL(int a[20][20], int n)
{

    // To make Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }
}

int main()
{
    int n, a[20][20];

    cout << "Enter number of rows and columns of the array(N x N): ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "The inputted array is: " << endl;
    Display(a, n);
    RotateClockwise(a, n);
    cout << "The array after rotation (Without STL) is: " << endl;
    Display(a, n);
    Rotate_STL(a, n); // Since the array has been rotated earlier, it will rotate the alreafy rotated array
    cout << "The array after rotation (Without STL) is: " << endl;
    Display(a, n);
    return 0;
}