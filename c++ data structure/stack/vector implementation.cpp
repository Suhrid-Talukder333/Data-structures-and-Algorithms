#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    vector<int> arr;

    void push(int x)
    {
        arr.emplace_back(x);
    }

    int pop()
    {
        int temp = arr.back();
        arr.pop_back();
        return temp;
    }

    int giveSize()
    {
        return arr.size();
    }

    int peek()
    {
        return arr.front();
    }
};

int main()
{
    myStack a;
    a.push(1);
    a.push(2);
    cout << a.peek() << endl;
    cout << a.giveSize() << endl;
    cout << a.pop() << endl;
    cout << a.peek() << endl;
}