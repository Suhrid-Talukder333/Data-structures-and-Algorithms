#include <bits/stdc++.h>
using namespace std;

//we use legender's formula where if we are dividing with prime number then the maximum power will be
// maxPower = fact/pn + fact/pn^2 + ...... until 0;
//But if it is not a prime number then we just calculate with the maximum prime number in the prime
//factorization of that number

int maxPrimeFact(int n)
{
    int ans = -1;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans = i;
            n /= i;
        }
    }
    if (n > 1)
    {
        ans = n;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int maxPrime = maxPrimeFact(n);
    int res = 0;
    for (int i = maxPrime; maxPrime <= x; maxPrime *= maxPrime)
    {
        res += (x / maxPrime);
    }
    cout << res;
}