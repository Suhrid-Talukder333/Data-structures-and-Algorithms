#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int m;
  cin >> n >> m;
  vector<int> adj[n];

  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
}