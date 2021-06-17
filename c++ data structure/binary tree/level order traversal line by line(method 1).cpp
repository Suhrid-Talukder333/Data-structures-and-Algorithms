#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void leverOrderLined(node *head)
{
    if(head==NULL)
    {
        return;
    }
    queue<node *>q;
    q.push(head);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr = q.front();
        q.pop();
        if(curr == NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";

        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);
    leverOrderLined(root);
}