#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int i = 1;
    int arr[s.length()];
    arr[0] = 0;
    int len = 0;
    while (i < s.length())
    {
        if (s[i] == s[len])
        {
            len++;
            arr[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                arr[i] = 0;
                i++;
            }
            else
            {
                len = arr[len - 1];
            }
        }
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}