#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        cout << "NO";
        return;
    }
    else
    {
        if ((s1 + s1).find(s2) != string::npos)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        return;
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
}