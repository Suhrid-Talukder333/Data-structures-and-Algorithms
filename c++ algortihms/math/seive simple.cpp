#include <bits/stdc++.h>
using namespace std;

void seive(int n)
{
    vector<bool> check(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    seive(n); //print all prime till n
}