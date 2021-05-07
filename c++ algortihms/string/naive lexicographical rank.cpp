#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    string temp = s;

    sort(temp.begin(), temp.end());
    cout << temp << endl;
    int rank = 1;
    do
    {
        cout << temp << endl;
        rank++;
        next_permutation(temp.begin(), temp.end());
    } while (temp != s);
    cout << rank;
}

int main()
{
    string s;
    cin >> s;
    solve(s);
}