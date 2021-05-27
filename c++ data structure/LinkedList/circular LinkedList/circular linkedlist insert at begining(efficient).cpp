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

node *insertAtBeginning(node *head, int d)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
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
    head = insertAtBeginning(head, 40);
    display(head);
}