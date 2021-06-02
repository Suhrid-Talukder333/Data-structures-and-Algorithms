#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> s;
    node *curr = root;
    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->right->left = new node(60);
    inOrder(root);
}