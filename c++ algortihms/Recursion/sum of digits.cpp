#include <bits/stdc++.h>
using namespace std;

void solve(int n, int ans)
{
    if (n == 0)
    {
        cout << ans;
        return;
    }
    ans += n % 10;
    n /= 10;
    solve(n, ans);
}

int main()
{
    int n;
    cin >> n;
    solve(n, 0);
}