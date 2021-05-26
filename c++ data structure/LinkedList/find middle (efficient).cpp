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

int Middle(node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->next == NULL)
    {
        return head->data;
    }
    node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        head = head->next;
        temp = temp->next->next;
    }
    return head->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    // head->next->next->next = new node(40);
    cout << Middle(head);
}