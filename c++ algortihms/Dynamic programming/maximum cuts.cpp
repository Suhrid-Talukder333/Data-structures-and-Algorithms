#include <bits/stdc++.h>
using namespace std;

int solve(int n, int a, int b, int c)
{
  // if (n < 0)
  // {
  //   return -1;
  // }
  // if (n == 0)
  // {
  //   return 0;
  // }
  // int res = max(solve(n - a, a, b, c), max(solve(n - b, a, b, c), solve(n - c, a, b, c)));
  // if (res == -1)
  // {
  //   return res;
  // }
  // else
  // {
  //   return res + 1;
  // }
  int dp[n + 1];
  dp[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    dp[i] = -1;
    if ((i - a) >= 0)
    {
      dp[i] = max(dp[i], dp[i - a]);
    }
    if ((i - b) >= 0)
    {
      dp[i] = max(dp[i], dp[i - b]);
    }
    if ((i - c) >= 0)
    {
      dp[i] = max(dp[i], dp[i - c]);
    }
    if (dp[i] != -1)
    {
      dp[i]++;
    }
  }
  return dp[n];
}

int main()
{
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << solve(n, a, b, c);
}