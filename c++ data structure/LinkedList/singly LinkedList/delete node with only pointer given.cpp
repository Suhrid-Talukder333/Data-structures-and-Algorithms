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

void deleteNode(node *head)
{
    node *temp = head->next;
    head->data = temp->data;
    head->next = temp->next;
    delete temp;
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
    node *temp = head->next->next = new node(30);
    head->next->next->next = new node(40);
    deleteNode(temp);
    display(head);
}