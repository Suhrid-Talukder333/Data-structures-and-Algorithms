#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        next = prev = NULL;
        data = x;
    }
};

node *reverseIt(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *curr = head;
    node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
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
    head = reverseIt(head);
    display(head);
}