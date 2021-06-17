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

int maxLevel = 0;

void printLeft(node *head, int level)
{
    if(head==NULL)
    {
        return;
    }
    if(maxLevel<level)
    {
        cout<<head->data<<" ";
        maxLevel= level;
    }
    printLeft(head->left,level+1);
    printLeft(head->right,level+1);
}

void leftView(node *head){
    printLeft(head, 1);
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);
    leftView(root);
}