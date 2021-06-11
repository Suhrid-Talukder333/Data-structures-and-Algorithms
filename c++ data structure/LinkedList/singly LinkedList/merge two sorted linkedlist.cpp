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

node *merge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    else if (b == NULL)
    {
        return a;
    }
    node *tail = NULL;
    node *head = NULL;
    if (a->data >= b->data)
    {
        head = b;
        tail = b;
        b = b->next;
    }
    else
    {
        head = a;
        tail = a;
        a = a->next;
    }
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a == NULL)
    {
        tail->next = b;
    }
    else
    {
        tail->next = a;
    }
    return head;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next = new node(40);
    node *head1 = new node(15);
    head1->next = new node(25);
    head1->next->next = new node(35);
    head = merge(head, head1);
    display(head);
}