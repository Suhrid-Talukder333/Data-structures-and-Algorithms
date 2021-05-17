#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            cout << mid;
            return;
        }
        else if (arr[mid] >= arr[start]) // left part
        {
            if (arr[start] <= x && arr[mid] >= x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[end] >= x && arr[mid] <= x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << -1;
}

int main()
{
    int arr[6] = {10, 20, 40, 60, 5, 8};
    int x;
    cin >> x;
    binarySearch(arr, 0, 5, x);
}