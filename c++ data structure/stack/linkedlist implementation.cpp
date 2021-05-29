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

struct myStack
{
    int size = 0;
    node *head = NULL;

    void push(int x)
    {
        size++;
        node *temp = new node(x);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    int pop()
    {
        if (size == 0)
        {
            cout << "underflow\n";
            return -1;
        }
        size--;
        node *curr = head;
        int y = curr->data;
        head = head->next;
        delete curr;
        return y;
    }

    int peek()
    {
        return head->data;
    }

    int giveSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size;
    }
};

int main()
{
    myStack a;
    a.push(1);
    cout << a.peek() << endl;
    a.push(2);
    cout << a.peek() << endl;
    cout << a.giveSize() << endl;
    cout << a.pop() << endl;
    cout << a.peek() << endl;
}