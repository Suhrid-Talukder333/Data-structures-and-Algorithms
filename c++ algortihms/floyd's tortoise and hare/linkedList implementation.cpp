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

bool detectLoop(node *head)
{
    node *tortoise = head;
    node *hare = head;
    while (tortoise != NULL && hare != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    node *temp = head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = temp;
    if (detectLoop(head))
    {
        cout << "Yes";
    }
    else
    {
        cout << "no";
    }
}