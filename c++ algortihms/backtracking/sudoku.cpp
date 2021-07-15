#include <bits/stdc++.h>
using namespace std;

int board[100][100];

bool isSafe(int row, int col, int k, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (board[i][col] == k || board[row][i] == k)
    {
      return false;
    }
  }

  int s = sqrt(n);
  // cout << s << endl;
  int startRow = row - row % s;
  int startCol = col - col % s;
  for (int i = 0; i < s; i++)
  {
    for (int j = 0; j < s; j++)
    {
      if (board[i + startRow][j + startCol] == k)
      {
        return false;
      }
    }
  }
  return true;
}

bool solve(int n)
{
  // cout << "here we go again\n";
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (board[i][j] == 0)
      {
        break;
      }
    }
  }
  if (i == n && j == n)
  {
    cout << "hello\n";
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
    return true;
  }
  for (int k = 1; k <= n; k++)
  {
    if (isSafe(i, j, k, n))
    {

      board[i][j] = k;
      if (solve(n))
      {
        return true;
      }
      board[i][j] = 0;
    }
  }
  return false;
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
      board[i][j] = x;
    }
  }
  cout << "\n\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << "\n";
  }
  solve(n);
}