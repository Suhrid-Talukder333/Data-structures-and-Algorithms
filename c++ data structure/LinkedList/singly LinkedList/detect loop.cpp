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

bool detect(node *head)
{
    unordered_set<node *> s;
    while (head != NULL)
    {
        if (s.find(head) != s.end())
        {
            return true;
        }
        else
        {
            s.insert(head);
        }
        head = head->next;
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
    if (detect(head))
    {
        cout << "Yes";
    }
    else
    {
        cout << "no";
    }
}