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

void getSize(node *root)
{
    if (root == NULL)
    {
        return;
    }
    int size = 0;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        size++;
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
    }

    cout << size;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->right->left = new node(60);
    getSize(root);
}