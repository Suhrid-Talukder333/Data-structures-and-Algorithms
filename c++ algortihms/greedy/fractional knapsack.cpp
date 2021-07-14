#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
  return ((double)a.second / a.first > (double)b.second / b.first);
}

int main()
{
  int n;
  cin >> n;
  int w;
  cin >> w;
  vector<pair<int, int>> pairs;
  for (int i = 0; i < n; i++)
  {
    int weight, value;
    cin >> weight >> value;
    pairs.push_back({weight, value});
  }
  sort(pairs.begin(), pairs.end(), comp);
  double res = 0;
  for (auto x : pairs)
  {
    if (w >= x.first)
    {
      res += x.second;
      w -= x.first;
    }
    else
    {
      res += (w * (double)(x.second / x.first));
    }
  }
  cout << res << endl;
}