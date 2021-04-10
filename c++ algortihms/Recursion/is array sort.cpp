#include <bits/stdc++.h>
using namespace std;

bool isSort(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSort(arr + 1, n--);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isSort(arr, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}