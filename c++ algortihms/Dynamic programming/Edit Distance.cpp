#include <bits/stdc++.h>
using namespace std;

int solve(string s1, string s2, int n, int m)
{
  int dp[n + 1][m + 1];
  for (int i = 0; i <= n; i++)
  {
    dp[i][0] = i;
  }
  for (int i = 0; i <= m; i++)
  {
    dp[0][i] = i;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (s1[i - 1] == s2[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
      }
    }
  }
  return dp[n][m];
}
int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  cout << solve(s1, s2, s1.size(), s2.size());
}