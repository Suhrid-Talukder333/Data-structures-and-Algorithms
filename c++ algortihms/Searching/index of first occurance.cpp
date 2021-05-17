#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int x)
{
    int ans = 9999;
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            ans = min(ans, mid);
            end = mid - 1;
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
    if (ans == 9999)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}

int main()
{
    int arr[8] = {1, 1, 4, 4, 6, 6, 9, 9};
    sort(arr, arr + 8);
    int x;
    cin >> x;
    binarySearch(arr, 7, x);
}