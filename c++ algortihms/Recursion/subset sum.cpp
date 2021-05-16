#include <bits/stdc++.h>
using namespace std;

//how many subsets have the equal sum as k;

int solve(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return sum == 0 ? 1 : 0;
    }
    return solve(arr, n - 1, sum) + solve(arr, n - 1, sum - arr[n - 1]);
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
    int k;
    cin >> k;
    cout << solve(arr, n, k);
}