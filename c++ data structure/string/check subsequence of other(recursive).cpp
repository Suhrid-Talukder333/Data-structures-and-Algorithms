#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2, int n, int m)
{
    if (m == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (s1[n] == s2[m])
    {
        return check(s1, s2, n - 1, m - 1);
    }
    else
    {
        return check(s1, s2, n - 1, m);
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (check(s1, s2, s1.length() - 1, s2.length() - 1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}