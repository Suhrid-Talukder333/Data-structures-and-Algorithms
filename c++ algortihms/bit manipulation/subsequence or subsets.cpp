#include <bits/stdc++.h>
using namespace std;

void subset(string s)
{
    for (int i = 0; i < (1 << s.length()); i++)
    {
        cout << "'";
        int j = 0;
        int n = i;
        while (n > 0)
        {
            if (n & 1)
            {
                cout << s[j];
            }
            j++;
            n = n >> 1;
        }
        cout << "'\n";
    }
}

int main()
{
    string s;
    cin >> s;
    subset(s);
}