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

void deleteLoop(node *head)
{
    node *tortoise = head;
    node *hare = head;

    while (tortoise != NULL && hare != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare)
        {
            break;
        }
    }
    if (tortoise == NULL || hare == NULL)
    {
        return;
    }
    tortoise = head;
    while (tortoise->next != hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next;
    }
    hare->next = NULL;
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
    head->next->next->next->next = temp;
    deleteLoop(head);
    display(head);
}