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
    int count1 = 0, count2 = 0;
    node *curr = head;
    while (curr != NULL)
    {
        count1++;
        curr = curr->next;
    }
    curr = head1;
    while (curr != NULL)
    {
        count2++;
        curr = curr->next;
    }
    int x = abs(count1 - count2);
    if (count2 > count1)
    {
        swap(head, head1);
    }
    int i = 0;
    while (i < x)
    {
        head = head->next;
    }
    while (head != head1 && head != NULL || head1 != NULL)
    {
        head = head->next;
        head1 = head1->next;
    }
    if (head1 == NULL || head == NULL)
    {
        cout << "no intersection";
    }
    else
    {
        cout << head->data;
    }
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