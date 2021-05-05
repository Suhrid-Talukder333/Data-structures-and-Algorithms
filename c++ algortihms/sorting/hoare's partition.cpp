#include <bits/stdc++.h>
using namespace std;

void hoare(int arr[], int n)
{
    int i = -1;
    int j = n;
    int pivot = arr[2];
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (j <= i)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            return;
        }
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    hoare(arr, 8);
}