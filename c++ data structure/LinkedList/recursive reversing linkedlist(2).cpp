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

node *reverseIt(node *head)
{
    if (head->next == NULL || head->next->next == NULL)
    {
        return head;
    }
    node *secondEndHead = reverseIt(head->next);
    node *temp = secondEndHead->next;
    secondEndHead->next->next = secondEndHead;
    return temp;
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
    head = reverseIt(head);
    display(head);
}