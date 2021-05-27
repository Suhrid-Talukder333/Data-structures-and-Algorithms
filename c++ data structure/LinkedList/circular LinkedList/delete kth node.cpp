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

node *removeKth(node *head, int d)
{
    if (head == NULL)
    {
        return head;
    }
    if (d == 1)
    {
        node *temp = head->next;
        swap(head->data, temp->data);
        head->next = temp->next;
        delete temp;
        return head;
    }
    node *curr = head;
    for (int i = 0; i < d - 2; i++)
    {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
}

void display(node *head)
{
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
    head = removeKth(head, 2);
    display(head);
}