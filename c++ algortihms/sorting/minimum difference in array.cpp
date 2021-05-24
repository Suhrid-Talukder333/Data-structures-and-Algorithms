#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
    sort(arr, arr + n);
    int ans = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        ans = min(ans, (arr[i] - arr[i - 1]));
    }
    return ans;
}

int main()
{
    int arr[7] = {7, 3, 2, 4, 9, 12, 56};
    cout << solve(arr, 7);
}