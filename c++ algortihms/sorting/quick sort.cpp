#include <bits/stdc++.h>
using namespace std;

int lomuto(int arr[], int l, int h)
{
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] <= arr[h])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[h], arr[i + 1]);
    return (i);
}

void quiksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot = lomuto(arr, l, h);
        quiksort(arr, l, pivot);
        quiksort(arr, pivot + 1, h);
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    quiksort(arr, 0, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}