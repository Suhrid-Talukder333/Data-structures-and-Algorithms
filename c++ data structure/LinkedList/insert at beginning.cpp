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

node *insertBeginning(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

int main()
{
    node *head = NULL;
    head = insertBeginning(head, 10);
    head = insertBeginning(head, 20);
    cout << head->data << "\n";
    cout << head->next->data;
}