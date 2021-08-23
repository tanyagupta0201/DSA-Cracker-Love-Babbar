// 0 - Blocked Path, 1 - Free Path

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **a, int x, int y, int n)
{
    if (x < n and y < n and a[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool RatInMaze(int **a, int x, int y, int n, int **SolnArr)
{
    // Base Case
    // When rat reaches the final position
    if (x == n - 1 and y == n - 1)
    {
        SolnArr[x][y] = 1;
        return true;
    }

    // Recursive Case
    if (isSafe(a, x, y, n))
    {
        // We are assuming that there is path
        SolnArr[x][y] = 1;

        // Moving in right direction
        if (RatInMaze(a, x + 1, y, n, SolnArr))
        {
            return true;
        }

        // Moving in downward direction
        if (RatInMaze(a, x, y + 1, n, SolnArr))
        {
            return true;
        }

        // If both the conditions are false, then we will backtrack
        SolnArr[x][y] = 0; // Backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    // Allocating dynamically
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int **SolArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        SolArr[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            SolArr[i][j] = 0;
        }
    }

    if (RatInMaze(a, 0, 0, n, SolArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << SolArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}