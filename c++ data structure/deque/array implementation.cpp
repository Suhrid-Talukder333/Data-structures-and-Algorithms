#include <bits/stdc++.h>
using namespace std;

struct mydeque
{
    int *arr;
    int front;
    int size;
    int cap;

    mydeque(int x)
    {
        arr = new int[x];
        front = 0;
        size = 0;
        cap = x;
    }

    void insertFront(int x)
    {
        if (size == cap)
        {
            cout << "full\n";
            return;
        }
        front = (front - 1 + cap) % cap;
        arr[front] = x;
        size++;
    }

    void insertRear(int x)
    {
        if (size == cap)
        {
            cout << "full\n";
            return;
        }
        int rear = (front + size) % cap;
        arr[rear] = x;
        size++;
    }

    int removeFront()
    {
        if (size == 0)
        {
            cout << "empty\n";
            return -1;
        }
        int temp = arr[front];
        front = (front + 1) % cap;
        size--;
        return temp;
    }

    int removeRear()
    {
        if (size == 0)
        {
            cout << "empty\n";
            return -1;
        }
        int rear = (front + size - 1) % cap;
        int temp = arr[rear];
        size--;
        return temp;
    }

    int getFront()
    {
        if (size == 0)
        {
            cout << "empty\n";
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (size == 0)
        {
            cout << "empty\n";
            return -1;
        }
        int rear = (front + size - 1) % cap;
        return arr[rear];
    }

    int getSize()
    {
        return size;
    }

    bool isFull()
    {
        if (size == cap)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    mydeque a(5);
    a.insertRear(2);
    a.insertFront(1);
    cout << a.getRear() << endl;
    cout << a.getFront() << endl;
    cout << a.removeRear() << endl;
    cout << a.getRear() << endl;
}