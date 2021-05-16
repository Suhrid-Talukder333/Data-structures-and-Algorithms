#include <bits/stdc++.h>
using namespace std;

void solve(string s, int i)
{
    if (i == s.size() - 1)
    {
        cout << s << endl;
    }
    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        solve(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s, 0);
}