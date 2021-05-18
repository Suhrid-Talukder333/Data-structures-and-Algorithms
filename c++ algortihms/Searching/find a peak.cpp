#include <bits/stdc++.h>
using namespace std;

int peakFind(int arr[], int start, int end)
{
    if (arr[start] > arr[start + 1])
    {
        return arr[start];
    }
    if (arr[end] > arr[end - 1])
    {
        return arr[end];
    }
    start++, end--;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return arr[mid];
        }
        else if (arr[mid - 1] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {10, 20, 15, 5, 23, 61, 61};
    cout << peakFind(arr, 0, 6);
}
