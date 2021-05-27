#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *insertAtEnd(node *head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        temp->next = temp;
        return temp;
    }
    node *tail = head;
    while (tail->next != head)
    {
        tail = tail->next;
    }
    node *temp = new node(d);
    tail->next = temp;
    temp->next = head;
    return head;
}

void display(node *head)
{
    node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    head = insertAtEnd(head, 40);
    display(head);
}