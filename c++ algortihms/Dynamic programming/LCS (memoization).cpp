#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];

int lcs(string s1, string s2, int n, int m)
{
  if (dp[n][m] == -1)
  {
    if (n == 0 || m == 0)
    {
      return 0;
    }
    if (s1[n - 1] == s2[m - 1])
    {
      dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1);
    }
    else
    {
      dp[n][m] = max(lcs(s1, s2, n - 1, m), lcs(s1, s2, n, m - 1));
    }
  }
  return dp[n][m];
}

int main()
{
  for (int i = 0; i < 1000; i++)
  {
    for (int j = 0; j < 1000; j++)
    {
      dp[i][j] = -1;
    }
  }
  string s1, s2;
  cin >> s1 >> s2;
  cout << lcs(s1, s2, s1.size(), s2.size());
}