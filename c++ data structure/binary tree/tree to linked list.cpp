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

node *previous = NULL;

node *treeToLL(node *root)
{
    if (root == NULL)
    {
        return root;
    }
    node *head = treeToLL(root->left);
    if (previous == NULL)
    {
        head = root;
    }
    else
    {
        root->left = previous;
        previous->right = root;
    }
    previous = root;
    treeToLL(root->right);
    return head;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->right->left = new node(30);
    root->right->right = new node(35);

    root = treeToLL(root);
    display(root);
}