//given a string output the leftmost character that repeats

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    bool visited[256] = {0};
    int ans = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (!visited[s[i]])
        {
            visited[s[i]] = true;
        }
        else
        {
            ans = i;
        }
    }
    if (ans == -1)
    {
        cout << "not found";
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