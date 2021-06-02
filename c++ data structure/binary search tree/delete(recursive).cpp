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
    while (root != NULL)
    {
        if (root->data == x)
        {
            return true;
        }
        else if (root->data < x)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return false;
}

node *getSuccessor(node *root)
{
    node *curr = root->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

node *remove(node *root, int x)
{
    node *curr = root;
    if (curr == NULL)
    {
        return curr;
    }
    if (curr->data > x)
    {
        curr->left = remove(curr->left, x);
    }
    else if (curr->data < x)
    {
        curr->right = remove(curr->right, x);
    }
    else
    {
        if (curr->left == NULL)
        {
            node *temp = curr->right;
            delete curr;
            return temp;
        }
        else if (curr->right != NULL)
        {
            node *temp = curr->left;
            delete curr;
            return temp;
        }
        else
        {
            node *temp = getSuccessor(curr);
            curr->data = temp->data;
            curr->right = remove(curr->right, curr->data);
        }
    }
    return root;
}

int main()
{
    node *root = new node(10);
    root->right = new node(11);
    root->left = new node(9);
    root->right->right = new node(20);
    root = remove(root, 20);
    if (search(root, 20))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
}