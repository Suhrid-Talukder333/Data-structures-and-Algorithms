#include <bits/stdc++.h>
using namespace std;

void seive(int n)
{
    vector<bool> check(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    seive(n);
}