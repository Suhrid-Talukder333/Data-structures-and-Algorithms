#include <bits/stdc++.h>
using namespace std;

int find(vector<int> tails, int i, int value)
{
  int start = 0;
  int end = i;
  while (start < end)
  {
    int mid = (start + end) / 2;
    if (tails[mid] >= value)
    {
      end = mid;
    }
    else
    {
      start = mid + 1;
    }
  }
  return end;
}

void solve(int arr[], int n)
{
  vector<int> tails(n);
  tails[0] = arr[0];
  int len = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > tails[len - 1])
    {
      tails[len] = arr[i];
      len++;
    }
    else
    {
      int index = find(tails, len - 1, arr[i]);
      tails[index] = arr[i];
    }
  }
  cout << len;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  solve(arr, n);
}