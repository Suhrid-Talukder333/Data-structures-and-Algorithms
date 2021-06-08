#include <bits/stdc++.h>
using namespace std;

void checkPalindrom(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "not palindrom";
            return;
        }
        i++, j--;
    }
    cout << "palindrom";
}

int main()
{
    string s;
    cin >> s;
    checkPalindrom(s);
}