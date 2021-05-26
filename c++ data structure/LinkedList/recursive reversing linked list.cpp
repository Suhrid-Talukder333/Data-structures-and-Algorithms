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
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *restHead = reverseIt(head->next);
    node *restTail = head->next;
    restTail->next = head;
    head->next = NULL;
    return restHead;
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