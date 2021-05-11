#include <bits/stdc++.h>
using namespace std;

long long fact(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * fact(x - 1);
}

void countZeros(long long a)
{
    int ans = 0;
    while (a % 10 == 0 && a > 0)
    {
        ans++;
        a /= 10;
    }
    cout << ans << "\n";
}

int main()
{
    int x;
    cin >> x;
    long long a = fact(x);
    countZeros(a);
    // cout << a;
}