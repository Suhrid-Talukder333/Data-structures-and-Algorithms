#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        int index = -1;
        int m = -1;
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] >= m)
            {
                m = arr[i];
                index = i;
            }
        }
        swap(arr[n - j - 1], arr[index]);
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    selectionSort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}