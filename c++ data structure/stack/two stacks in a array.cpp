#include <bits/stdc++.h>
using namespace std;

struct twoStack
{
    int *arr;
    int cap;
    int top1;
    int top2;

    twoStack(int x)
    {
        arr = new int[x];
        cap = x;
        top1 = -1;
        top2 = x;
    }

    void push1(int x)
    {
        if (top1 + 1 < top2)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "overflow\n";
        }
        return;
    }
    void push2(int x)
    {
        if (top2 - 1 > top1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "overflow\n";
        }
        return;
    }
    int pop1()
    {
        if (top1 - 1 < 0)
        {
            cout << "underflow\n";
            return -1;
        }
        else
        {
            int temp = arr[top1];
            top1--;
            return temp;
        }
    }
    int pop2()
    {
        if (top2 + 1 > cap - 1)
        {
            cout << "underflow\n";
            return -1;
        }
        else
        {
            int temp = arr[top2];
            top2++;
            return temp;
        }
    }
    int front1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << "underflow\n";
            return -1;
        }
    }
    int front2()
    {
        if (top2 < cap)
        {
            return arr[top2];
        }
        else
        {
            cout << "underflow\n";
            return -1;
        }
    }
    int giveSize()
    {
        if (top1 == -1 && top2 == cap)
        {
            cout << "empty";
            return -1;
        }
        else
        {
            return (top1 + 1 + (cap - top2));
        }
    }
};

int main()
{
    twoStack a = twoStack(5);
    a.push1(10);
    a.push2(20);
    cout << a.front1() << endl;
    cout << a.front2() << endl;
    cout << a.giveSize() << endl;
}