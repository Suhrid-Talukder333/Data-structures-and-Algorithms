//given a string output the leftmost character that doesn't repeat

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int check[256];
    fill(check, check + 256, -1);
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
    int ans = INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if (check[i] >= 0)
        {
            ans = min(ans, check[i]);
        }
    }
    if (ans == INT_MAX)
    {
        cout << "not Found";
    }
    else
    {
        cout << s[ans];
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}