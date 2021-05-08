#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int d;
    cin >> d;
    d %= 8;
    leftRotate(arr, 8, d);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}