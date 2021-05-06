#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < k; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    int updated[n];
    for (int i = n - 1; i >= 0; i--)
    {
        updated[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = updated[i];
    }
}

int main()
{
    int k = 90;
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    countingSort(arr, 8, k);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}