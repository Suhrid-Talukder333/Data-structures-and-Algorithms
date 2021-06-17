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
    while(q.empty()== false)
    {
       int count = q.size();
       for(int i=0; i<count; i++)
       {
            node*curr = q.front();
           cout<<curr->data<<" ";
            q.pop();
           if(curr->left!=NULL)
           {
               q.push(curr->left);
           }
           if(curr->right!=NULL)
           {
               q.push(curr->right);
           }
       }
       cout<<endl;
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