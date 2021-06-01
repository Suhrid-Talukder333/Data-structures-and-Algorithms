#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        left = right = NULL;
    }
};

int giveSize(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return giveSize(root->left) + giveSize(root->right) + 1;
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
    cout << giveSize(root);
}