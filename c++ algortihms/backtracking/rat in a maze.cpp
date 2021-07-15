#include <bits/stdc++.h>
using namespace std;

int maze[100][100];
int path[100][100];

bool backtrack(int n, int sourcex, int sourcey, int endx, int endy)
{
  if (sourcex == endx && sourcey == endy)
  {
    path[endx][endy] = 1;
    return true;
  }
  else
  {
    if (maze[sourcex][sourcey] == 1)
    {
      path[sourcex][sourcey] = 1;
      if (backtrack(n, sourcex + 1, sourcey, endx, endy))
      {
        return true;
      }
      else if (backtrack(n, sourcex, sourcey + 1, endx, endy))
      {
        return true;
      }
      path[sourcex][sourcey] = 0;
    }
  }
}

void solve(int n, int sourcex, int sourcey, int endx, int endy)
{
  if (backtrack(n, sourcex, sourcey, endx, endy))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << path[i][j] << " ";
      }
      cout << endl;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      maze[i][j] = x;
    }
  }
  int sourcex, sourcey, endx, endy;
  cin >> sourcex >> sourcey >> endx >> endy;
  solve(n, sourcex, sourcey, endx, endy);
}