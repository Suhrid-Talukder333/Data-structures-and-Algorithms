#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {1, 1, 1, 1, 4, 5, 6, 4};
    sort(arr, arr + 8);
    int x;
    cin >> x;
    int firstOccur = INT_MAX;
    int lastOccur = -1;
    int start = 0;
    int end = 7;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            firstOccur = min(firstOccur, mid);
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
    if (firstOccur == INT_MAX)
    {
        cout << -1;
        return 0;
    }
    start = 0;
    end = 7;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            lastOccur = max(lastOccur, mid);
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
    }
    cout << lastOccur - firstOccur + 1;
}