#include <bits/stdc++.h>
using namespace std;

struct myQueue
{
    int *arr;
    int size;
    int front = 0;
    int rear = -1;

    myQueue(int x)
    {
        arr = new int[x];
        size = x;
    }

    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << "Queue is Full\n";
            return;
        }
        rear++;
        arr[rear] = x;
    }

    int dequeue()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        int temp = arr[front];
        for (int i = 0; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }
        rear--;
        return temp;
    }

    int getSize()
    {
        return size;
    }

    int getFront()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    bool isFull()
    {
        if (rear == size - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (rear == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    myQueue *q = new myQueue(5);
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    cout << q->dequeue() << endl;
    cout << q->getFront() << endl;
    cout << q->getRear() << endl;
    cout << q->getSize() << endl;
    cout << q->dequeue() << endl;
}