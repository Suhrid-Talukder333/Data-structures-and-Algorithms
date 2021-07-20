#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
  int lis[n];
  lis[0] = 1;
  for (int i = 1; i < n; i++)
  {
    lis[i] = 1;
    for (int j = 0; j < i; j++)
    {
      if (arr[j] < arr[i])
      {
        lis[i] = max(lis[i], lis[j] + 1);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, lis[i]);
  }
  return ans;
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

  cout << solve(arr, n);
}