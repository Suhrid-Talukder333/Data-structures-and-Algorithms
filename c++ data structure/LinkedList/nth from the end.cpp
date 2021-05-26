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

int endNth(node *head, int n)
{
    node *first = head;
    node *last = head;
    for (int i = 0; i < n; i++)
    {
        if (last == NULL)
        {
            return -1;
        }
        last = last->next;
    }
    while (last != NULL)
    {
        first = first->next;
        last = last->next;
    }
    return first->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << endNth(head, 1);
}