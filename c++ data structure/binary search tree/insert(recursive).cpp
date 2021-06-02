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

node *getInsert(node *root, int x)
{
    if (root == NULL)
    {
        return new node(x);
    }
    else if (root->data > x)
    {
        root->left = getInsert(root->left, x);
    }
    else
    {
        root->right = getInsert(root->right, x);
    }
    return root;
}

int main()
{
    node *root = new node(10);
    root = getInsert(root, 20);
    cout << root->right->data;
}