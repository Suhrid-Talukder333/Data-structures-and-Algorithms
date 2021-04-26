#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = ans * a;
        }
        a *= a;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << power(a, n);
}