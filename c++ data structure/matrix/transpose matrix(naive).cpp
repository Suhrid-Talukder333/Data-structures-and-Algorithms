#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(int **arr, int n, int m)
{
    int temp[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    transposeMatrix(arr, n, m);
}