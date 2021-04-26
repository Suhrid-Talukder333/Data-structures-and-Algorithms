#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        ans += (n & 1) * p;
        p *= 10;
        n = n >> 1;
    }
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    decimalToBinary(n);
}