//given a string output the leftmost character that doesn't repeat

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int res = INT_MAX;
    int check[256];
    for (int i = 0; i < 256; i++)
    {
        check[i] = -1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (check[s[i]] == -1)
        {
            check[s[i]] = i;
        }
        else
        {
            check[s[i]] = -2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (check[i] >= 0)
        {
            res = min(res, check[i]);
        }
    }
    if (res == INT_MAX)
    {
        cout << -1;
        return;
    }
    cout << s[res];
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}