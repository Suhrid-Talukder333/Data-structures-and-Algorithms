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
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
        if (curr->data >= x)
        {
            ans = min(ans, curr->data);
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
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
    cout << getCeil(root, 26);
}