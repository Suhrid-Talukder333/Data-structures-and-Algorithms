#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int ans = 0;
    for (int i = 5; i <= x; i = i * 5)
    {
        ans += (x / 5);
    }
    cout << ans << "\n";
}