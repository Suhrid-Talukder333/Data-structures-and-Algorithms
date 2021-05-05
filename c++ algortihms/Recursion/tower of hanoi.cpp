#include <bits/stdc++.h>
using namespace std;

int x = 0;

void solve(int n, char a, char b, char c)
{
    x++;
    if (n == 1)
    {
        cout << "move " << n << "th disc to " << c << endl;

        return;
    }
    solve(n - 1, a, c, b);
    cout << "move " << n << "th disc to " << c << endl;
    solve(n - 1, b, a, c);
}

int main()
{
    int n;
    cin >> n; //disc count
    solve(n, 'a', 'b', 'c');
    cout << x << " steps" << endl;
}