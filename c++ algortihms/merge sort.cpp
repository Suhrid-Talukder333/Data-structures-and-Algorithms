#include <bits/stdc++.h>
using namespace std;

void merge(int left[], int right[], int a[])
{
    int i = 0, j = 0, k = 0;
    int n1 = sizeof(left) / sizeof(left[0]);
    int n2 = sizeof(right) / sizeof(right[0]);
    while (j < n1 && k < n2)
    {
        if (left[j] < right[k])
        {
            a[i] = left[j];
            j++;
            i++;
        }
        else
        {
            a[i] = right[k];
            k++;
            i++;
        }
    }
    while (j < n1)
    {
        a[i] = left[j];
        j++;
        i++;
    }
    while (k < n2)
    {
        a[i] = right[k];
        k++;
        i++;
    }
}

void mergeSort(int a[])
{
    int n = sizeof(a) / sizeof(a[0]);
    if (n < 2)
    {
        return;
    }
    int mid = n / 2;
    int left[n / 2];
    int right[n - mid];
    int i = 0;
    for (; i < mid; i++)
    {
        left[i] = a[i];
    }
    for (; i < n; i++)
    {
        right[i - mid] = a[i];
    }
    cout << 1 << endl;
    mergeSort(left);
    mergeSort(right);
    merge(left, right, a);
}

int main()
{
    int arr[] = {1, 4, 5, 6};
    mergeSort(arr);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i];
    }
}