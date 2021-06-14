#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    reverseQueue(q);
    q.push(x);
    cout << x << " ";
}

int main()
{
    queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    reverseQueue(q);
}