#include <bits/stdc++.h>
using namespace std;

int permut(int n)
{
    int ans = 1;
    while (n)
    {
        ans *= (n);
        n--;
    }
    return ans;
}

void solve(string s)
{
    int check[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        check[s[i]]++;
    }
    for (int i = 1; i < 256; i++)
    {
        check[i] = check[i - 1] + check[i];
    }
    int mul = permut(s.length());
    int rank = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mul = mul / (s.length() - 1);
        rank += (check[s[i] - 1] * mul);
        for (int j = s[i]; j < 256; j++)
        {
            check[j]--;
        }
    }
    cout << rank + 1;
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}