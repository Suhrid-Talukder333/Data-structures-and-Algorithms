#include <bits/stdc++.h>
using namespace std;

bool visited[100000];

void bfs(vector<int> adj[], int source, int path[])
{
  visited[source] = true;
  queue<int> q;
  q.push(source);
  path[source] = 0;
  while (!q.empty())
  {
    int currentNode = q.front();
    q.pop();
    for (auto x : adj[currentNode])
    {
      if (visited[x] == false)
      {
        path[x] = path[currentNode] + 1;
        q.push(x);
        visited[x] = true;
      }
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  int path[n];
  for (int i = 0; i < n; i++)
  {
    path[i] = INT_MAX;
  }
  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int source;
  cin >> source;
  bfs(adj, source, path);
  for (int i = 0; i < n; i++)
  {
    cout << path[i] << " ";
  }
}