#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int start, int mid, int end)
{
    int ans = 0;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1];
    int right[n2];
    int i = 0, j = 0, k = start;
    for (int x = 0; x < n1; x++)
    {
        left[x] = arr[start + x];
    }
    for (int x = 0; x < n2; x++)
    {
        right[x] = arr[mid + x + 1];
    }
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            ans += (n1 - i);
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
    return ans;
}

int mergeSort(int arr[], int start, int end)
{
    int ans = 0;
    if (start < end)
    {
        int mid = (start + end) / 2;
        ans += mergeSort(arr, start, mid);

        ans += mergeSort(arr, mid + 1, end);

        ans += merge(arr, start, mid, end);
    }
    return ans;
}

int main()
{
    int arr[5] = {2, 4, 1, 3, 5};
    cout << mergeSort(arr, 0, 5);
}