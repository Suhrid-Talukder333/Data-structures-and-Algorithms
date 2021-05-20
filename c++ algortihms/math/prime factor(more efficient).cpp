#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "";
        return 1;
    }
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            n /= (i + 2);
        }
    }
}