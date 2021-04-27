#include <bits/stdc++.h>
using namespace std;

long long s(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int a = s(n - 1) + s(n - 2);
    return a;
}

int main()
{
    long long n;
    cin >> n;
    cout << s(n);
}