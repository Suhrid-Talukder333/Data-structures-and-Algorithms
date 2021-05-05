#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    int p = 3;
    int temp[8];
    int n = 8;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[p])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[p];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[j++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}