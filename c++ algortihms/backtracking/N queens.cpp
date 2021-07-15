#include <bits/stdc++.h>
using namespace std;

int board[100][100];

bool isSafe(int row, int col, int n)
{
  for (int i = 0; i < col; i++)
  {
    if (board[row][i] == 1)
    {
      return false;
    }
  }

  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
    if (board[i][j])
    {
      return false;
    }
  }

  for (int i = row, j = col; i < n && j >= 0; i++, j--)
  {
    if (board[i][j])
    {
      return false;
    }
  }

  return true;
}

bool backtrack(int col, int n)
{
  if (col == n)
  {
    return true;
  }
  for (int i = 0; i < n; i++)
  {
    if (isSafe(i, col, n))
    {
      board[i][col] = 1;
      if (backtrack(col + 1, n))
      {
        return true;
      }
      board[i][col] = 0;
    }
  }
  return false;
}

void solve(int n)
{
  if (backtrack(0, n))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  solve(n);
}