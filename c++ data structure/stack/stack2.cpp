//this stack will be implemented by linked lists
//stack has two operations which are pop and push which will only be done 
// on the top of the stack so we also need a top() index

#include<bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size=0;
    class node
    {
    public:
        int data;
        node *next=NULL;
        node *previous=NULL;
    };
    node *head=NULL;
    node *tail=NULL;

    bool isEmpty()
    {
        return size==0;
    }
    void push(int value)
    {
        if(isEmpty())
        {
            head = new node;
            head->data=value;
            tail=head;
            size++;
        }
        else
        {
            node *temp=NULL;
            temp= new node;
            temp->data=value;
            temp->previous=head;
            tail=temp;
            size++;
        } 
    }
    void pop()
    {
        tail->previous->next=NULL;
        tail=tail->previous;
        size--;
    }
    void top()
    {
        cout<<tail->data<<endl;
    }
};
int main()
{
    Stack dl;
    dl.push(1);
    dl.push(2);
    dl.top();
    dl.pop();
    dl.top();
}