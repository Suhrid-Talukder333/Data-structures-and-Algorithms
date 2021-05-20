#include <bits/stdc++.h>
using namespace std;

void getLcm(int a, int b)
{
    int x = max(a, b);
    while (1)
    {
        if (x % a == 0 && x % b == 0)
        {
            cout << x;
            return;
        }
        x++;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    getLcm(a, b);
}