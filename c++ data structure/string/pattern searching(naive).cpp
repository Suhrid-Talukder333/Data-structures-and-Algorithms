#include <bits/stdc++.h>
using namespace std;

void solve(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int j = 0;
    for (; j <= n - m; j++)
    {
        int i = 0;
        for (; i < m; i++)
        {
            if (text[i + j] != pattern[i])
            {
                break;
            }
        }
        if (i == m)
        {
            cout << j << " ";
        }
    }
}

int main()
{
    string text;
    cin >> text;
    string pattern;
    cin >> pattern;
    solve(text, pattern);
}