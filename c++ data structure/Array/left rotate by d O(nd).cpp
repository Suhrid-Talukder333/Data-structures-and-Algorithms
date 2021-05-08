#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        leftRotate(arr, 8);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}