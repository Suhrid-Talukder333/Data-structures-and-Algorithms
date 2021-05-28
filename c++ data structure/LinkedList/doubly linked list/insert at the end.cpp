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

node *insertEnd(node *head, int d)
{
    node *temp = new node(d);

    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void display(node *head)
{
    if (head == NULL)
    {
        return;
    }
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
    head->next->prev = head;
    head->next->next = new node(30);
    head->next->next->prev = head->next;
    head = insertEnd(head, 5);
    display(head);
}