#include <bits/stdc++.h>
using namespace std;

int solve(int coins[], int n, int value)
{
  int dp[value + 1];
  dp[0] = 0;
  for (int i = 1; i <= value; i++)
  {
    dp[i] = INT_MAX;
  }
  for (int j = 1; j <= value; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (coins[i] <= j)
      {
        int res = dp[j - coins[i]];
        if (res != INT_MAX)
        {
          dp[j] = min(dp[j], res + 1);
        }
      }
    }
  }
  return dp[value];
}

int main()
{
  int n;
  cin >> n;
  int value;
  cin >> value;
  int coins[n];
  for (int i = 0; i < n; i++)
  {
    cin >> coins[i];
  }

  cout << solve(coins, n, value);
}