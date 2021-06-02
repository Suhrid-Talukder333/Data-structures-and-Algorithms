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

bool search(node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else
    {
        if (root->data == x)
        {
            return true;
        }
        else if (root->data < x)
        {
            return search(root->right, x);
        }
        else
        {
            return search(root->left, x);
        }
    }
}

int main()
{
    node *root = new node(10);
    root->right = new node(11);
    root->left = new node(9);
    root->right->right = new node(20);
    if (search(root, 20))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
}