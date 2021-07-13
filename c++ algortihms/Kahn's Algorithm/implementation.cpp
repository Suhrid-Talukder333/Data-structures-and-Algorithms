#include <bits/stdc++.h>
using namespace std;

void kahns(vector<int> adj[], int nodes, int inDeg[])
{
  queue<int> q;
  for (int i = 0; i < nodes; i++)
  {
    if (inDeg[i] == 0)
    {
      q.push(i);
    }
  }
  while (!q.empty())
  {
    int current = q.front();
    q.pop();
    cout << current << " ";
    for (auto x : adj[current])
    {
      inDeg[x]--;
      if (inDeg[x] == 0)
      {
        q.push(x);
      }
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n];
  int inDeg[n];
  for (int i = 0; i < n; i++)
  {
    inDeg[i] = 0;
  }

  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    inDeg[b]++;
  }

  kahns(adj, n, inDeg);
}