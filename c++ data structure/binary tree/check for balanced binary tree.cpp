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

int checkBalance(node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int left = 0;
    int right = 0;

    left = checkBalance(head->left);
    if (left == -1)
    {
        return -1;
    }
    right = checkBalance(head->right);
    if (right == -1)
    {
        return -1;
    }
    if (abs(left - right) <= 1)
    {
        return max(left, right) + 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(30);
    root->left->left->left = new node(40);
    cout << (checkBalance(root));
}