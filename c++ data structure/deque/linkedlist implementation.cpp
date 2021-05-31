#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

struct mydeque
{
    node *head;
    node *tail;
    int size;

    mydeque()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertFront(int x)
    {
        node *temp = new node(x);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            size++;
        }
    }

    void insertRear(int x)
    {
        node *temp = new node(x);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            size++;
        }
    }

    int removeFront()
    {
        if (head == NULL)
        {
            cout << "empty\n";
            return -1;
        }
        int x = head->data;
        head = head->next;
        delete head->prev;
        size--;
        return x;
    }

    int removeRear()
    {
        if (head == NULL)
        {
            cout << "empty\n";
            return -1;
        }
        int x = tail->data;
        tail = tail->prev;
        delete tail->next;
        size--;
        return x;
    }

    int getFront()
    {
        if (head == NULL)
        {
            cout << "empty\n";
            return -1;
        }
        return head->data;
    }

    int getRear()
    {
        if (head == NULL)
        {
            cout << "empty\n";
            return -1;
        }
        return tail->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    mydeque a;
    a.insertRear(2);
    a.insertFront(1);
    cout << a.getRear() << endl;
    cout << a.getFront() << endl;
    cout << a.removeRear() << endl;
    cout << a.getRear() << endl;
}