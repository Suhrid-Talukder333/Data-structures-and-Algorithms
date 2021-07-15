#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
  return a.second > b.second;
}

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> pairs;
  int maxDeadline = 0;
  for (int i = 0; i < n; i++)
  {
    int deadline, value;
    cin >> deadline >> value;
    maxDeadline = max(maxDeadline, deadline);
    pairs.push_back({deadline, value});
  }

  sort(pairs.begin(), pairs.end(), comp);
  int ans[maxDeadline] = {0};
  for (auto x : pairs)
  {
    int y = x.first - 1;
    while (ans[y] != 0 && y >= 0)
    {
      y--;
    }
    if (ans[y] == 0)
    {
      ans[y] = x.second;
    }
  }
  for (auto x : ans)
  {
    cout << x << " ";
  }
}