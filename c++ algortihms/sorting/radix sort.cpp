//radix sort uses digits of numbers to sort

#include <bits/stdc++.h>
using namespace std;

void radixSort(int arr[], int n)
{
    int maximum = -1;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    int digits = 0;
    while (maximum)
    {
        maximum = log10(maximum);
        digits++;
    }
    for (int i = 0; i < n; i++)
    {
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    radixSort(arr, 8);
}