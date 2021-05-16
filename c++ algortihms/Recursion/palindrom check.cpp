#include <bits/stdc++.h>
using namespace std;

void solve(string s, int start, int end)
{
    if (s[start] != s[end])
    {
        cout << "not palindrom";
        return;
    }
    else if (start == end || start > end)
    {
        cout << "palindrom";
        return;
    }
    solve(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    solve(s, 0, s.size() - 1);
}