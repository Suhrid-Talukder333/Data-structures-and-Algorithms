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

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    long long a = fact(x);
    int ans = 1;
    for (int i = n; i < a; i *= i)
    {
        if (a % i == 0)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans;
}