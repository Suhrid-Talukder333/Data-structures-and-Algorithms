#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    cout << res;
}

int main()
{
    int arr[5] = {5, 0, 6, 2, 3};
    solve(arr, 5);
}