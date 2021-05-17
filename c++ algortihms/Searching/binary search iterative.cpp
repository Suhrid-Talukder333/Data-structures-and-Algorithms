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
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << -1;
}

int main()
{
    int arr[8] = {1, 2, 4, 5, 6, 8, 9, 11};
    sort(arr, arr + 8);
    int x;
    cin >> x;
    binarySearch(arr, 0, 7, x);
}