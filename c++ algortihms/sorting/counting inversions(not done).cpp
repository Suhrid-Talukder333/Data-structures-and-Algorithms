#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int start, int mid, int end)
{
    int ans = 0;
    int i = start;
    int j = mid;
    int k = 0;
    int temp[end - start + 1];
    while (i < mid && j < end)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else if (arr[i] > arr[j])
        {
            temp[k++] = arr[j++];
            ans++;
        }
    }
    while (i < mid)
    {
        temp[k++] = temp[i++];
    }
    while (j < end)
    {
        temp[k++] = temp[j++];
    }
    for (int x = start; x <= end; x++)
    {
        arr[x] = temp[x];
    }
    return ans;
}

int mergeSort(int arr[], int start, int end)
{
    int ans = 0;
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        ans += merge(arr, start, mid + 1, end);
    }
    return ans;
}

void countInversions(int arr[], int start, int n)
{
    int ans = 0;
    ans += mergeSort(arr, start, n);
    cout << ans;
}

int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    countInversions(arr, 0, 4);
}