#include <bits/stdc++.h>
using namespace std;

struct myQueue
{
    int *arr;
    int front;
    int capacity;
    int size;

    myQueue(int x)
    {
        arr = new int[x];
        size = 0;
        capacity = x;
        front = 0;
    }

    void enqueue(int x)
    {
        if (size == capacity)
        {
            cout << "Queue is Full\n";
            return;
        }
        int rear = (front + size - 1) % capacity;
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    int dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        int temp = arr[front];
        front = (front + 1) % capacity;
        size--;
        return temp;
    }

    bool isFull()
    {
        if (size == capacity)
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

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        int rear = (front + size - 1) % capacity;
        return arr[rear];
    }

    int getSize()
    {
        return size;
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