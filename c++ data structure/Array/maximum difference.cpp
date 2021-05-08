//maximum value of arr[j]-arr[i] such that j>i
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int min_ = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - min_);
        min_ = min(min_, arr[i]);
    }
    cout << res << endl;
}

int main()
{
    int arr[5] = {4, 5, 2, 3, 8};
    solve(arr, 5);
}