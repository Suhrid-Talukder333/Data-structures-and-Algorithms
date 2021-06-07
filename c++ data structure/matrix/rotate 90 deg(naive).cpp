#include <bits/stdc++.h>
using namespace std;

void rotate(int **arr, int n, int m)
{
    int temp[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[i][j] = arr[j][n - 1 - i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr;
    arr = new int *[m];
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
    rotate(arr, n, m);
}