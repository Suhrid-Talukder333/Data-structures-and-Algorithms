#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    int size = 0;
    int *arr;
    int i = 0;

    myStack(int x)
    {
        size = x;
        arr = new int(x);
    }

    void push(int x)
    {
        if (i == size)
        {
            cout << "Overflow\n";
            return;
        }
        arr[i] = x;
        i++;
    }

    int peek()
    {
        if (size == 0 || i == 0)
        {
            cout << "underflow\n";
            return -1;
        }
        return arr[i - 1];
    }

    int pop()
    {
        if (size == 0 || i == 0)
        {
            cout << "underflow\n";
            return -1;
        }
        i--;
        return arr[i];
    }

    int giveSize()
    {
        return size;
    }
};

int main()
{
    myStack *a = new myStack(5);
    a->push(1);
    a->push(2);
    cout << a->giveSize() << endl;
    cout << a->peek() << endl;
    cout << a->pop() << endl;
    cout << a->giveSize() << endl;
    cout << a->peek() << endl;
    a->push(9);
    cout << a->giveSize() << endl;
    cout << a->peek() << endl;
    cout << a->pop() << endl;
    cout << a->pop() << endl;
    cout << a->pop() << endl;
    cout << a->pop() << endl;
}