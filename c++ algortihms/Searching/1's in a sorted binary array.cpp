#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n)
{
    int ans = 9999;
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == 1)
        {
            ans = min(ans, mid);
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
        cout << n - ans + 1;
    }
}

int main()
{
    int arr[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    sort(arr, arr + 8);
    binarySearch(arr, 7);
}