#include <bits/stdc++.h>
using namespace std;

void solve(string s, string ans, int index)
{
    if (index == s.length())
    {
        cout << ans;
        return;
    }
    solve(s, ans, index + 1);
    solve(s, ans + s[index], index + 1);
}

int main()
{
    string s;
    cin >> s;
    string ans = " ";
    solve(s, ans, 0);
}