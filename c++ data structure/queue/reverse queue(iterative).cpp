#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    stack<int> s;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        s.push(x);
    }
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        q.push(x);
        cout << x << " ";
    }
}