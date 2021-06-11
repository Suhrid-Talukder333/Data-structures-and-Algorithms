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

void displayList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void intersection(node *head, node *head1)
{
    unordered_set<node *> s;
    node *curr = head;
    while (curr != NULL)
    {
        s.insert(curr);
        curr = curr->next;
    }
    curr = head1;
    while (curr != NULL)
    {
        if (s.find(curr) != s.end())
        {
            cout << curr->data;
            return;
        }
        curr = curr->next;
    }
    cout << "no intersection";
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    node *temp = head->next->next = new node(30);
    head->next->next->next = new node(40);
    node *head1 = new node(25);
    head1->next = temp;
    // displayList(head);
    // cout << "\n";
    // displayList(head1);
    intersection(head, head1);
}