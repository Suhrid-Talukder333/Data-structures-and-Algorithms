#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct myQueue
{
    node *head, *tail;
    int size;
    myQueue()
    {
        size = 0;
        head = tail = NULL;
    }

    void enqueue(int x)
    {
        size++;
        if (head == NULL)
        {
            head = new node(x);
            tail = head;
        }
        else
        {
            tail->next = new node(x);
            tail = tail->next;
        }
    }

    int dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty";
            return -1;
        }
        else
        {
            size--;
            node *temp = head;
            head = head->next;
            int x = temp->data;
            delete temp;
            return x;
        }
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }

    int getSize()
    {
        return size;
    }

    int getRear()
    {
        if (head == NULL)
        {
            cout << "Queue is empty";
            return -1;
        }
        return tail->data;
    }

    int getFront()
    {
        if (head == NULL)
        {
            cout << "Queue is empty";
            return -1;
        }
        return head->data;
    }
};

int main()
{
    myQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.dequeue() << endl;
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.getSize() << endl;
    cout << q.dequeue() << endl;
}