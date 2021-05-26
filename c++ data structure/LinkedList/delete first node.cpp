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

node *remove(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *temp = head->next;
    delete head;
    return temp;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head = remove(head);
    cout << head->data;
}