#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int arr[s.length()];
    arr[0] = 0;
    for (int i = 1; i < s.length(); i++)
    {
        string prefix = "";
        string suffix = "";
        int n = 0;
        for (int j = 0, k = i; j < i && k >= 0; j++, k--)
        {
            prefix += s[j];
            suffix += s[k];
            reverse(suffix.begin(), suffix.end());
            cout << suffix << " " << prefix << " " << k << endl;
            if (suffix == prefix)
            {
                n = max(n, j + 1);
            }
            reverse(suffix.begin(), suffix.end());
        }
        arr[i] = n;
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