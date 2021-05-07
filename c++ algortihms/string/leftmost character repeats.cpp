//given a string output the leftmost character that repeats

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
            res = min(res, check[s[i]]);
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