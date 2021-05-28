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

node *sortedInsert(node *head, int k)
{
    if (head == NULL)
    {
        return new node(k);
    }
    if (head->data > k)
    {
        node *temp = new node(k);
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL && (curr->next->data < k))
    {
        curr = curr->next;
    }
    node *temp = new node(k);
    temp->next = curr->next;
    curr->next = temp;
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
    head->next->next->next = new node(40);
    head = sortedInsert(head, 50);
    display(head);
}