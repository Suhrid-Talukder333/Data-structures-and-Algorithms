#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], bool visited[], int source, stack<int> &s)
{
  visited[source] = true;
  for (auto x : adj[source])
  {
    if (visited[x] == false)
    {
      dfs(adj, visited, x, s);
    }
  }
  s.push(source);
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n];
  bool visited[n];
  int dist[n];
  for (int i = 0; i < n; i++)
  {
    visited[i] = false;
    dist[i] = 100;
  }
  int weights[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      weights[i][j] = 0;
    }
  }

  while (m--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back(b);
    weights[a][b] = c;
  }

  int source;
  cin >> source;
  dist[source] = 0;

  stack<int> s;

  for (int i = 0; i < n; i++)
  {
    if (visited[i] == false)
    {
      dfs(adj, visited, i, s);
    }
  }

  while (!s.empty())
  {
    int current = s.top();
    s.pop();
    for (auto x : adj[current])
    {
      cout << dist[current] << endl;
      dist[x] = min(dist[x], dist[current] + weights[current][x]);
    }
  }

  for (int x : dist)
  {
    cout << x << " ";
  }
}