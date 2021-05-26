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

void display(node *head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data << " ";
    }
    display(head->next);
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    display(head);
}