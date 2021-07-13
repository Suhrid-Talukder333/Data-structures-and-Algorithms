#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[], bool visited[], bool backEdge[], int source)
{
  visited[source] = true;
  backEdge[source] = true;
  for (auto x : adj[source])
  {
    if (visited[x] == false)
    {
      if (dfs(adj, visited, backEdge, x))
      {
        return true;
      }
    }
    else if (backEdge[x] == true)
    {
      return true;
    }
  }
  backEdge[source] = false;
  return false;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n];
  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
  bool visited[n];
  bool backEdge[n];
  for (int i = 0; i < n; i++)
  {
    visited[i] = false;
    backEdge[i] = false;
  }
  for (int i = 0; i < n; i++)
  {
    if (visited[i] == false)
    {
      if (dfs(adj, visited, backEdge, i))
      {
        cout << "yes";
        return 0;
      }
    }
  }
  cout << "no";
}