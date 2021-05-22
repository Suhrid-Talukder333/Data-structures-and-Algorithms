#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0;
    int j = 0;

    while (i < size1 && j < size2)
    {
        if (arr2[j - 1] == arr2[j])
        {
            j++;
            continue;
        }
        else if (arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (arr2[j] == arr1[i])
        {
            cout << arr2[j] << endl;
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[1] = {3};
    intersection(arr1, arr2, 5, 1);
}