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
    node *temp = new node(x);
    node *parent = NULL;
    node *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->data > x)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
    if (parent == NULL)
    {
        return temp;
    }
    if (parent->data > x)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }
    return root;
}

int main()
{
    node *root = new node(20);
    root = getInsert(root, 30);
    cout << root->right->data << endl;
}