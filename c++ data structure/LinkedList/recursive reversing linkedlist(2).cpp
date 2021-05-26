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

node *reverseIt(node *curr, node *prev)
{
    if (curr == NULL)
    {
        return prev;
    }
    node *next = curr->next;
    curr->next = prev;
    return reverseIt(next, curr);
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
    head->next->next = new node(20);
    head->next->next->next = new node(40);
    head = reverseIt(head, NULL);
    display(head);
}