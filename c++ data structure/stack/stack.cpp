#include <bits/stdc++.h>
using namespace std;

int store[100];
int spot = 0;

void push(int value)
{
    store[spot] = value;
    spot++;
}

int pop()
{
    int x = store[spot--];
    return x;
}

bool isEmpty()
{
    return spot == 0;
}

void print()
{
    if (isEmpty())
    {
        cout << "error its empty";
        return;
    }
    for (int i = 0; i < spot; i++)
    {
        cout << store[i] << endl;
    }
}

int main()
{
    push(1);
    push(2);
    pop();
    print();
}