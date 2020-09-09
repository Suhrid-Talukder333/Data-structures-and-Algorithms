#include<iostream>
using namespace std;

class node
{
public:
    char data;
    node *next;
};

node *first;

void create(char arr[])
{
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=0;
    last=first;

    for(int i=1; arr[i]!='\0'; i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last =t;
    }
}

void display(node *p)
{
    if(p!=0)
    {
        display(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    char arr[100];
    gets(arr);
    create(arr);
    display(first);
}
