#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
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