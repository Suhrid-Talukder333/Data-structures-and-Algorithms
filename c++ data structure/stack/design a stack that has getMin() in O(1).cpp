#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    stack<int> main, aux;

    void myPush(int x)
    {
        main.push(x);
        if (aux.empty())
        {
            aux.push(x);
        }
        else
        {
            if (x <= aux.top())
            {
                aux.push(x);
            }
        }
    }

    void myPop(int x)
    {
        if (main.top() == aux.top())
        {
            aux.pop();
        }
        main.pop();
    }

    int getMin()
    {
        return aux.top();
    }
};

int main()
{
    myStack s;
    s.myPush(10);
    s.myPush(20);
    s.myPush(5);
    s.myPush(3);
    s.myPush(30);
    cout << s.getMin();
}