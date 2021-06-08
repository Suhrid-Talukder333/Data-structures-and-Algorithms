#include <bits/stdc++.h>
using namespace std;

void solve(string a)
{
    for (int i = 0, j = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
        {
            for (int x = j, y = i - 1; x < y; x++, y--)
            {
                swap(a[x], a[y]);
            }
            j = i + 1;
        }
        else if (i == a.length() - 1)
        {
            for (int x = j, y = i; x < y; x++, y--)
            {
                swap(a[x], a[y]);
            }
        }
    }
    reverse(a.begin(), a.end());
    cout << a << endl;
}

int main()
{
    string a;
    getline(cin, a);
    solve(a);
}