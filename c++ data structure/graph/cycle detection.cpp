// Can be done with both dfs and bfs
#include <bits/stdc++.h>
using namespace std;
bool cycle = false;
bool visited[100];
bool dfs(vector<int> adj[], int source, int parent)
{
  visited[source] = true;
  for (auto x : adj[source])
  {
    if (visited[x] == false)
    {
      if (dfs(adj, x, source))
      {
        return true;
      }
    }
    else if (x != parent)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int n, m;
  int count = -1;
  cin >> n >> m;
  vector<int> adj[n];

  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  if (dfs(adj, 0, -1) == false)
  {
    cout << "No";
  }
  else
  {
    cout << "Yes";
  }
}