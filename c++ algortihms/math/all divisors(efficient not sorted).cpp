#include <bits/stdc++.h>
using namespace std;

void allDivisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    allDivisors(n);
}