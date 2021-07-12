#include <bits/stdc++.h>
using namespace std;
bool visited[1000];

void DFS(vector<int> adj[], int source)
{
  visited[source] = true;

  for (auto x : adj[source])
  {
    if (visited[x] == false)
    {
      DFS(adj, x);
    }
  }
}
