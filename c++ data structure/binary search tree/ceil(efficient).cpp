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
    }
};

int getCeil(node *root, int x)
{
    if (root == NULL)
    {
        return -1;
    }
    int ans = INT_MAX;
    while (root != NULL)
    {
        if (root->data == x)
        {
            ans = x;
            break;
        }
        if (root->data < x)
        {
            root = root->right;
        }
        else
        {
            ans = min(ans, root->data);
            root = root->right;
        }
    }
    return ans;
}

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
    node *root;
    root = getInsert(root, 10);
    root = getInsert(root, 20);
    root = getInsert(root, 30);
    root = getInsert(root, 35);
    root = getInsert(root, 25);
    cout << getCeil(root, 33);
}