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

node *reverseGroup(node *head, int g)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *curr = head;
    node *next = NULL;
    node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < g)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        node *rest_head = reverseGroup(next, g);
        head->next = rest_head;
    }
    return prev;
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
    head->next->next->next = new node(50);
    head = reverseGroup(head, 2);
    display(head);
}