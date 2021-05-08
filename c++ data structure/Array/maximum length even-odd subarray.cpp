#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] %= 2;
    }
    int ans = 0;
    int current = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            current++;
            ans = max(ans, current);
        }
        else
        {
            current = 0;
        }
    }
    cout << ans + 1;
}

int main()
{
    int arr[4] = {10, 12, 8, 4};
    solve(arr, 4);
}