#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int start, int end, int x)
{
    if (start > end)
    {
        cout << -1;
        return;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == x)
    {
        cout << mid;
        return;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, start, mid - 1, x);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, x);
    }
}

int main()
{
    int arr[8] = {1, 2, 4, 5, 6, 8, 9, 11};
    sort(arr, arr + 8);
    int x;
    cin >> x;
    binarySearch(arr, 0, 7, x);
}