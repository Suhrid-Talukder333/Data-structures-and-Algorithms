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

int maxNode(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        return max(root->data, max(maxNode(root->left), maxNode(root->right)));
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
    cout << maxNode(root);
}