#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
  if (a.second < b.second)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> pairs, ans;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    pairs.push_back({a, b});
  }
  sort(pairs.begin(), pairs.end(), comp);
  ans.push_back(pairs[0]);
  for (int i = 1; i < pairs.size(); i++)
  {
    if (ans[i - 1].second <= pairs[i].first)
    {
      ans.push_back(pairs[i]);
    }
  }
  cout << "\n\n";
  for (auto x : ans)
  {
    cout << x.first << " " << x.second << "\n";
  }
}