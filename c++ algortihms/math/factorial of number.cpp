#include <bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    long long ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= (long long)i;
    }
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    factorial(n);
}