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

int search(node *head, int k, int pos)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == k)
    {
        return pos;
    }
    return search(head->next, k, ++pos);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << search(head, 10, 0);
}
