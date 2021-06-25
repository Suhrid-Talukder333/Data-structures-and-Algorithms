#include <bits/stdc++.h>
using namespace std;
#define MAX_NUM 10000000
bool primes[10000005] = {0};

void seive()
{
    primes[0] = primes[1] = true;
    for (int i = 2; i * i <= MAX_NUM; i++)
    {
        if (primes[i] == false)
        {
            for (int j = i * i; j * j <= MAX_NUM; j += i)
            {
                if (primes[j] == false)
                {
                    primes[j] = true;
                }
            }
        }
    }
}

int segmentedSeive(int r, int l)
{
    seive();
    vector<int> primesInInterval;

    for (int i = 2; i * i <= r; i++)
    {
        if (primes[i] == false)
        {
            primesInInterval.push_back(i);
        }
    }

    bool intervalPrimes[r - l + 1] = {0};

    for (auto x : primesInInterval)
    {
        int firstMultiple = (l / x) * x;
        if (l % x == 0)
        {
            firstMultiple += x;
        }

        for (int i = max(firstMultiple, x * x); i <= r; i += x)
        {
            intervalPrimes[i - r] = true;
        }
    }
    int count = 0;
    for (int i = r; i <= l; i++)
    {
        if (intervalPrimes[i - r] == false)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << segmentedSeive(l, r);
}