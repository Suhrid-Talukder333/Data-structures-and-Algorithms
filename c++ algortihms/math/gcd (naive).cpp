#include <bits/stdc++.h>
using namespace std;

void gcd(int a, int b)
{
    int x = min(a, b);
    int ans = 1;
    for (int i = 2; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    gcd(a, b);
}