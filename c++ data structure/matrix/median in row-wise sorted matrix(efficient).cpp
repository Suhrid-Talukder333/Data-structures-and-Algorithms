#include <bits/stdc++.h>
using namespace std;

void median(int arr[][5], int n, int m)
{
    int minimum = arr[0][0];
    int maximum = arr[0][m - 1];
    for (int i = 1; i < n; i++)
    {
        minimum = min(minimum, arr[i][0]);
        maximum = max(maximum, arr[i][m - 1]);
    }

    int medPos = (n * m + 1) / 2;

    while (minimum < maximum)
    {
        int midian = (minimum + maximum) / 2;
        int midPos = 0;
        for (int i = 0; i < n; i++)
        {
            midPos += upper_bound(arr[i], arr[i] + m, midian) - arr[i];
        }
        if (midPos < medPos)
        {
            minimum = midian + 1;
        }
        else
        {
            maximum = midian;
        }
    }
    cout << minimum << endl;
}

int main()
{
    int arr[3][5] = {{5, 10, 20, 30, 40},
                     {1, 2, 3, 4, 6},
                     {11, 13, 15, 17, 19}};

    median(arr, 3, 5);
}