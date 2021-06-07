#include <bits/stdc++.h>
using namespace std;

void printBoundary(int **arr, int n, int m)
{
    if (n == 1) //row 1
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[0][i] << " ";
        }
    }
    else if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < n - 1; i++)
        {
            cout << arr[i][m - 1] << " ";
        }
        for (int i = m - 1; i >= 0; i--)
        {
            cout << arr[n - 1][i] << " ";
        }
        for (int i = n - 2; i >= 1; i--)
        {
            cout << arr[i][0];
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr;
    arr = new int *[n];
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }
    printBoundary(arr, n, m);
}