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

node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }
    return prev;
}

void checkPalindrom(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *mid = reverse(slow->next);
    fast = head;
    while (mid != NULL)
    {
        if (fast->data != mid->data)
        {
            cout << "not palindrom";
            return;
        }
        mid = mid->next;
        fast = fast->next;
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