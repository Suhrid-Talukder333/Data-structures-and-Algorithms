#include <bits/stdc++.h>
using namespace std;

void rotate(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    int temp[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[i][j] = arr[n - 1 - i][j];
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
    rotate(arr, n, m);
}