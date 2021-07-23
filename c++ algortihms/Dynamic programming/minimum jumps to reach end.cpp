#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
  //recursive
  // if (current == 0)
  // {
  //   return 0;
  // }
  // int res = INT_MAX;
  // for (int j = 0; j <= current - 1; j++)
  // {
  //   if (arr[j] + j >= current)
  //   {
  //     int sub_res = solve(arr, n, j);
  //     if (sub_res != INT_MAX)
  //     {
  //       res = min(res, sub_res + 1);
  //     }
  //   }
  // }
  // return res;

  //DP
  int dp[n];
  dp[0] = 0;
  for (int i = 1; i < n; i++)
  {
    dp[i] = INT_MAX;
  }
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[j] + j >= i)
      {
        if (dp[j] != INT_MAX)
        {
          dp[i] = min(dp[i], dp[j] + 1);
        }
      }
    }
  }
  return dp[n - 1];
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

  cout << solve(arr, n);
}