#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void display(node *head)
{
    if (head == NULL)
    {
        return;
    }
    //method 1
    // cout << head->data << " ";
    // for (node *curr = head->next; curr != head; curr = curr->next)
    // {
    //     cout << curr->data << " ";
    // }
    //method 2
    node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    display(head);
}