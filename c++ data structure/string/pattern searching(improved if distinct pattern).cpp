#include <bits/stdc++.h>
using namespace std;

void solve(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int i = 0;
    for (; i < n - m;)
    {
        int j = 0;
        for (; j < m; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = i + j;
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