//interview question

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(arr[j], rmax);
        }
        res += min(lmax, rmax) - arr[i];
    }
    cout << res;
}

int main()
{
    int arr[5] = {5, 0, 6, 2, 3};
    solve(arr, 5);
}