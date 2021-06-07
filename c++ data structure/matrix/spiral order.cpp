#include <bits/stdc++.h>
using namespace std;

void spiral(int **arr, int n, int m)
{
    if (n == 1)
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
        int top = 0, bottom = n - 1, left = 0, right = m - 1;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                cout << arr[i][right] << " ";
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    cout << arr[bottom][i] << " ";
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    cout << arr[i][left] << " ";
                }
                left++;
            }
        }
    }
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
    spiral(arr, n, m);
}