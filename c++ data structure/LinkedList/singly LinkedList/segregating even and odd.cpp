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

node *segregate(node *head)
{
    node *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *curr = head;
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        if (curr->data & 1)
        {
            if (os == NULL)
            {
                os = curr;
                oe = os;
            }
            else
            {
                oe->next = curr;
                oe = oe->next;
            }
        }
        else
        {
            if (es == NULL)
            {
                es = curr;
                ee = es;
            }
            else
            {
                ee->next = curr;
                ee = ee->next;
            }
        }
    }
    if (os == NULL || es == NULL)
    {
        return head;
    }

    ee->next = os;
    oe->next = NULL;
    return es;
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
    head->next = new node(21);
    head->next->next = new node(33);
    head->next->next->next = new node(40);
    head = segregate(head);
    display(head);
}