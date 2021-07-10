#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; //nodes count
  cin >> n;
  int m; //edges count
  cin >> m;
  int adjMat[n][n] = {0};
  while (m--)
  {
    int a, b; // from a to b connection
    cin >> a >> b;
    adjMat[a][b] = 1;
    adjMat[b][a] = 1;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << adjMat[i][j] << endl;
    }
  }
}