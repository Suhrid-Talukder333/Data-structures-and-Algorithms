#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int n, int v)
{
  bool visited[n];
  for (int i = 0; i < n; i++)
  {
    visited[i] = false;
  }
  visited[v] = true;
  queue<int> q;
  q.push(v);
  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    for (auto i : adj[v])
    {
      if (visited[i] == false)
      {
        visited[i] = true;
        q.push(i);
      }
    }
  }
}