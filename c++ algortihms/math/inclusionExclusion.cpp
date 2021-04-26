//given n find the count of numbers till n that can be divided by primes numbers that are < 20

#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int ans = 0;
    int primes[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    int size = sizeof(primes) / sizeof(primes[0]);
    for (int i = 1; i < (1 << size); i++)
    {
        int deno = 1;
        int setBits = __builtin_popcount(i);
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                deno *= primes[j];
            }
        }
        if (setBits & 1) //odd
        {
            ans += n / deno;
        }
        else
        {
            ans -= n / deno;
        }
    }
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    solve(n);
}