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

bool childrenSum(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    if (head->left == NULL && head->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if (head->left)
    {
        sum += head->left->data;
    }
    if (head->right)
    {
        sum += head->right->data;
    }

    return (sum == head->data && childrenSum(head->left) && childrenSum(head->right));
}

int main()
{
    node *root = new node(30);
    root->left = new node(20);
    root->right = new node(40);
    if (childrenSum(root))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}