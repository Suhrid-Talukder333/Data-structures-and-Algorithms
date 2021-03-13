#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
}*first,*last;

void create(int arr[],int length)
{
    node *t;
    first=new node;
    first->data=arr[0];
    first->next=0;
    last =first;

    for(int i=1; i<length; i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

bool check(node *p)
{
    int x=p->data;
    while(p)
    {
        if(p->data<x)
        {
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}

void display(node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    create(arr,10);
    display(first);
    if(check(first))
    {
        cout<<"sorted"<<endl;
    }
    else
    {
        cout<<"not sorted";
    }
}
