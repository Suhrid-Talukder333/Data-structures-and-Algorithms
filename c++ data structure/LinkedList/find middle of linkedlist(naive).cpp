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

int findMiddle(node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    int size = 0;
    node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
        size++;
    }
    if (size == 1)
    {
        return head->data;
    }
    size = size / 2;
    while (size--)
    {
        head = head->next;
    }
    return head->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << findMiddle(head);
}