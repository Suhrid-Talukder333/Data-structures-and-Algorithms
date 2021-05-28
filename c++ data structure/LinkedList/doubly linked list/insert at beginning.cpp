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
        prev = next = NULL;
    }
};

node *insertBeginning(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    return temp;
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
    head = insertBeginning(head, 5);
    display(head);
}