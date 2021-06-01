#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void preOrder(node *root)
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
            cout << curr->data << " ";
            if (curr->right != NULL)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }
        if (!s.empty())
        {
            curr = s.top();
            s.pop();
        }
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
    preOrder(root);
}