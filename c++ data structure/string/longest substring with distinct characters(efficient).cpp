#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int prev[256];
    for (int i = 0; i < 256; i++)
    {
        prev[i] = -1;
    }
    int i = 0;
    int res = 0;
    for (int j = 0; j < s.length(); j++)
    {
        i = max(i, prev[s[j]] + 1);
        res = max(res, (j - i + 1));
        prev[s[j]] = j;
    }
    cout << res;
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}