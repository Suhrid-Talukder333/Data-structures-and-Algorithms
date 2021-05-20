#include <bits/stdc++.h>
using namespace std;

int getGcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return getGcd(b, a % b);
}

void getLcm(int a, int b)
{
    int x = getGcd(a, b);
    cout << a * b / x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    getLcm(a, b);
}