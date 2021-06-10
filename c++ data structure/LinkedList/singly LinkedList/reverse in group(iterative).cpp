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

node *reverseGroup(node *head, int g)
{
    node *curr = head;
    node *prevFirst = NULL;
    bool isFirstPass = true;
    while (curr != NULL)
    {
        int count = 0;
        node *first = curr;
        node *prev = NULL;
        node *next = NULL;
        while (curr != NULL && count < g)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (isFirstPass)
        {
            head = prev;
            isFirstPass = false;
        }
        else
        {
            prevFirst->next = prev;
        }
        prevFirst = first;
    }
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
    head->next->next->next = new node(50);
    head = reverseGroup(head, 2);
    display(head);
}