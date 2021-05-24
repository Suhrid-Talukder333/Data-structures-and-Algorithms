#include <bits/stdc++.h>
using namespace std;

int lomuto(int arr[], int n)
{
    int i = -1;
    for (int x = 0; x < n - 1; x++)
    {
        if (arr[x] <= arr[n - 1])
        {
            i++;
            swap(arr[x], arr[i]);
        }
    }
    swap(arr[i + 1], arr[n - 1]);
    return i + 1;
}

void solve(int arr[], int n, int k)
{
    int low = 0;
    int end = n;
    while (low < end)
    {
        int p = lomuto(arr, end);
        if (p == k - 1)
        {
            cout << arr[p];
            return;
        }
        else if (p > k - 1)
        {
            end = p - 1;
        }
        else
        {
            low = p + 1;
        }
    }
}

int main()
{
    int arr[5] = {30, 20, 5, 10, 8};
    int k;
    cin >> k;
    solve(arr, 5, k);
}