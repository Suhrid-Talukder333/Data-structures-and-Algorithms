#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], bool visited[], stack<int> &s, int source)
{
  visited[source] = true;
  for (auto x : adj[source])
  {
    if (visited[x] == false)
    {
      dfs(adj, visited, s, x);
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
  for (int i = 0; i < n; i++)
  {
    visited[i] = false;
  }

  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    if (visited[i] == false)
    {
      dfs(adj, visited, s, i);
    }
  }

  while (!s.empty())
  {
    int current = s.top();
    s.pop();
    cout << current << " ";
  }
}