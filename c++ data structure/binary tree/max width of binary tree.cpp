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
        left = NULL;
        right = NULL;
    }
};

int maxWidth(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int size = 0;
    queue<node *> q;
    q.push(head);
    while (q.empty() == false)
    {
        int count = q.size();
        size = max(size, count);
        for (int i = 0; i < count; i++)
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
        }
    }
    return size;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(60);
    root->right->left = new node(40);
    root->right->right = new node(50);
    cout << (maxWidth(root));
}