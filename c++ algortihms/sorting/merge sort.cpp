#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int left, int mid, int right)
{
    int i = left, k = 0, j = mid;
    int temp[right - left + 1];
    while (i < mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i < mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (int i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void MergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid + 1, right);
    }
}

int main()
{
    int arr[8] = {1, 5, 7, 23, 78, 84, 4, 2};
    MergeSort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}