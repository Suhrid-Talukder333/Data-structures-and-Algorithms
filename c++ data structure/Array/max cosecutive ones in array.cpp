#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            int res = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    res++;
                    ans = max(ans, res);
                }
                else
                {
                    i = j;
                    break;
                }
            }
        }
    }
    cout << ans;
}

int main()
{
    int arr[8] = {1, 0, 1, 1, 0, 1, 1, 0};
    solve(arr, 8);
}