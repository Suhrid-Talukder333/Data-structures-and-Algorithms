#include<iostream>
using namespace std;

class node
{public:
    int data;
    node *next;

}*first,*last;

void insrt(int value)
{
    node *t=new node;
    t->data=value;
    if(first==0)
    {
        t->next=0;
        first=t;
        last=t;
        return;
    }
    else if(value>last->data)
    {
        last->next=t;
        t->next=0;
        last=t;
        return;
    }
    else
    {
        if(value<first->data)
        {
            t->next=first;
            first=t;
            return;
        }
        else if(value<=last->data)
        {
            node *p;
            p=first;
            while(p)
            {
                if(value<=(p->next)->data)
                {
                    t->next=p->next;
                    p->next=t;
                    return;
                }
                p=p->next;
            }
        }
    }

}


void revers(node *o,node *p)
{
    if(p)
    {
       revers(p,p->next);
       p->next=o;
    }
    else
    {
        first=o;
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
    insrt(1);
    insrt(10);
    insrt(12);
    display(first);
    cout<<endl;
    node *o;
    revers(o,first);
    display(first);
}

