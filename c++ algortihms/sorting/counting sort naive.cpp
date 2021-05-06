//in counting sort we are given the number which is greater then the maximum number in the array
#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int k)
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
    for (int i = 0, j = 0; i < k; i++)
    {
        while (count[i] > 0)
        {
            arr[j] = i;
            j++;
            count[i]--;
        }
    }
}

int main()
{
    int k = 90;
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    countSort(arr, 8, k);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}