#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int visited[256] = {0};
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            if (visited[s[j]] != 0)
            {
                break;
            }
            else
            {
                res = max(res, j - i + 1);
                visited[s[j]]
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}