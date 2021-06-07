#include <bits/stdc++.h>
using namespace std;

void search(int **arr, int n, int m, int x)
{
    int i = 0, j = m - 1;
    while (i < n && j > 0)
    {
        if (arr[i][j] == x)
        {
            cout << "found (" << i << "," << j << ")";
            return;
        }
        else if (arr[i][j] > x)
        {
            j--;
        }
        else if (arr[i][j] < x)
        {
            i++;
        }
    }
    cout << "not found";
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr;
    int x = 1;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }
    search(arr, n, m, 10);
}