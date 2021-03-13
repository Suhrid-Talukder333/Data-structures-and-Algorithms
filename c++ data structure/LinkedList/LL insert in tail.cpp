#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
}*first,*last;

void insrttail(int value)
{
    node *t;
    t=new node;
    t->data=value;
    if(first==0)
    {
        first=t;
        last=t;
        first->next=0;
    }
    else
    {
        last->next=t;
        t->next=0;
        last=t;
    }
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
    insrttail(17);
    insrttail(11);
    insrttail(1);
    insrttail(2);
    insrttail(13);
    display(first);
}

