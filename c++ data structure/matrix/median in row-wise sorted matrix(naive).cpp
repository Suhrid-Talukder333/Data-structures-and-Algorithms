#include <bits/stdc++.h>
using namespace std;

void median(int arr[][5], int n, int m)
{
    int temp[n * m];
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[l] = arr[i][j];
            l++;
        }
    }

    sort(temp, temp + (n * m));
    cout << temp[(n * m) / 2];
}

int main()
{
    int arr[3][5] = {{5, 10, 20, 30, 40},
                     {1, 2, 3, 4, 6},
                     {11, 13, 15, 17, 19}};

    median(arr, 3, 5);
}