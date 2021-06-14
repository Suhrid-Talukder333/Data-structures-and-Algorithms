#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k; // range;
    queue<string> q;
    q.push("5");
    q.push("6");
    int i = 1;
    while (i <= k)
    {
        string x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x + "5");
        q.push(x + "6");
        i++;
    }
}