#include <bits/stdc++.h>
using namespace std;

void median(int arr1[], int arr2[], int start, int size1, int size2)
{
    int end = size1 - 1;
    while (start <= end)
    {
        int mid1 = (start + end) / 2;
        int mid2 = (size1 + size2 + 1) / 2 - mid1;
        int max1 = mid1 == 0 ? INT_MIN : arr1[mid1 - 1];
        int min1 = arr1[mid1];
        int max2 = mid2 == 0 ? INT_MIN : arr2[mid2 - 1];
        int min2 = arr2[mid2];
        if (max1 <= min2 && max2 <= min1)
        {
            if ((size1 + size2) % 2 == 0)
            {
                cout << (double)(max(max1, max2) + min(min1, min2)) / 2;
                return;
            }
            else
            {
                cout << (double)max(max1, max2);
                return;
            }
        }
        else if (max1 > min2)
        {
            end = mid1 - 1;
        }
        else
        {
            start = mid1 + 1;
        }
    }
}

int main()
{
    int arr1[5] = {30, 40, 50, 60, 70};
    int arr2[5] = {5, 6, 7, 8, 9};
    median(arr1, arr2, 0, 5, 5);
}