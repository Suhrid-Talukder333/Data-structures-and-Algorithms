#include <bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node *next;

    node(char x)
    {
        data = x;
        next = NULL;
    }
};

void checkPalindrom(node *head)
{
    if (head == NULL)
    {
        return;
    }
    stack<node *> s;
    node *curr = head;
    while (curr != NULL)
    {
        s.push(curr);
        curr = curr->next;
    }
    curr = head;
    while (curr != NULL && !s.empty())
    {
        node *temp = s.top();
        s.pop();
        if (temp->data != curr->data)
        {
            cout << "Not palindrom";
            return;
        }
        curr = curr->next;
    }
    cout << "palindrom";
}

int main()
{
    node *head = new node('g');
    head->next = new node('e');
    head->next->next = new node('e');
    head->next->next->next = new node('g');
    checkPalindrom(head);
}