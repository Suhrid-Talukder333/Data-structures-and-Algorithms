#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2)
{
    int j = 0;
    int i = 0;
    for (; i < s1.length() && j < s2.length(); i++)
    {
        if (s1[i] == s2[j])
        {
            i++, j++;
        }
    }
    if (j != s2.length())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    if (check(s1, s2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}