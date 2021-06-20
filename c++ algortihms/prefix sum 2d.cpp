#include <bits/stdc++.h>
using namespace std;

void prefixSum(int arr[][3], int pre[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)
            {
                pre[i][j] = arr[i][j];
            }
            else if (i == 0)
            {
                pre[i][j] = pre[i][j - 1] + arr[i][j];
            }
            else if (j == 0)
            {
                pre[i][j] = pre[i - 1][j] + arr[i][j];
            }
            else
            {
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + arr[i][j];
            }
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int pre[3][3];
    prefixSum(arr, pre);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << pre[i][j] << " ";
        }
        cout << "\n";
    }
    //for ranged queries arr[l][r] to arr[m][n] ans =
    //     if (l == 0 && r == 0)
    //     {
    //         ans = pre[m][n];
    //     }
    //     else if (l == 0)
    //     {
    //         ans = pre[m][n] - pre[m][r - 1];
    //     }
    //     else if (r == 0)
    //     {
    //         ans = pre[m][n] - pre[l - 1][n];
    //     }
    //     else
    //     {
    //         ans = pre[m][n] - pre[m][r - 1] - pre[l - 1][n] + pre[l - 1][r - 1];
    //     }
}