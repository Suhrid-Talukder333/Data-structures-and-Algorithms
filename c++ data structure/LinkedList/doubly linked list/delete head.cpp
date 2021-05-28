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

node *removeHead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head->next;
    head->prev = NULL;
    delete head;
    return curr;
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
    head = removeHead(head);
    display(head);
}