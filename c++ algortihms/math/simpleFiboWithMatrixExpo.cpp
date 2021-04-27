//for calculating 10^18 fibonachhi
//f(2*n) = f(n/2)*f(n/2) + f((n/2)-1)*f((n/2)-1) if even
//f((2*n)+1) = f(n/2)*f((n/2)+1) + f(n/2)*f((n/2)-1) if odd

#include <bits/stdc++.h>
using namespace std;
const long long Mod = 1000000007;
map<long long, long long> m;
long long f(long long n)
{
    if (m.count(n))
    {
        return m[n];
    }
    long long k = n / 2;
    if (n % 2 == 0)
    {
        return m[n] = (f(n / 2) * f(n / 2) + f((n / 2) - 1) * f((n / 2) - 1)) % Mod;
    }
    else
    {
        return m[n] = (f(n / 2) * f((n / 2) + 1) + f(n / 2) * f((n / 2) - 1)) % Mod;
    }
}

int main()
{
    long long n;
    cin >> n;
    m[0] = m[1] = 1;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        cout << f(n - 1);
    }
}