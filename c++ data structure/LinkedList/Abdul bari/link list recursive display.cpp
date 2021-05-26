#include<iostream>
using namespace std;

class node
{
    public:
    char data;
    node *next;
}*first;

void create(char arr[])
{
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1; arr[i]!='\0'; i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        display(p->next);
    }
}

int main()
{
    char arr[100];
    gets(arr);
    create(arr);
    display(first);
}


