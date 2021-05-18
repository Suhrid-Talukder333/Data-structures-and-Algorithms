#include <bits/stdc++.h>
using namespace std;

bool doAble(int arr[], int n, int k, int ans)
{
    int res = 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > ans)
        {
            res++;
        }
        else
        {
            sum += arr[i];
        }
    }
    return res <= k;
}

void solve(int arr[], int n, int k)
{
    int mx = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int start = mx;
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (doAble(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int k;
    cin >> k;
    solve(arr, 4, k);
}