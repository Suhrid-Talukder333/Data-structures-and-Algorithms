#include <bits/stdc++.h>
using namespace std;

//find modulo inverse of a mod m

void naiveSolution(int a, int m)
{
  for (int i = 1; i < m; i++)
  {
    if ((a * i) % m == 1)
    {
      cout << i;
      return;
    }
  }
  cout << "not found";
}

int main()
{
  int a, m;
  cin >> a >> m;
  naiveSolution(a, m);
}