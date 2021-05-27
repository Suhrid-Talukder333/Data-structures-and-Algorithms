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

node *inserAt(node *head, int pos, int x)
{
    if (pos == 1)
    {
        node *temp = new node(x);
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for (int i = 2; i <= pos - 1 && curr != NULL; i++)
    {
        if (curr->next == NULL)
        {
            return head;
        }
        curr = curr->next;
    }
    node *temp = new node(x);
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
    head = inserAt(head, 1, 5);
    display(head);
}