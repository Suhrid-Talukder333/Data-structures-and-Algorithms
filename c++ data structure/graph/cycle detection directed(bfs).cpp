//This uses kahn's algorithm
#include <bits/stdc++.h>
using namespace std;

void kahns(vector<int> adj[], int nodes, int inDeg[])
{
  queue<int> q;
  int count = 0;
  for (int i = 0; i < nodes; i++)
  {
    if (inDeg[i] == 0)
    {
      q.push(i);
      count++;
    }
  }
  while (!q.empty())
  {
    int current = q.front();
    q.pop();
    for (auto x : adj[current])
    {
      inDeg[x]--;
      if (inDeg[x] == 0)
      {
        q.push(x);
        count++;
      }
    }
  }
  if (count != nodes)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
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
  }
  kahns(adj, n, inDeg);
}