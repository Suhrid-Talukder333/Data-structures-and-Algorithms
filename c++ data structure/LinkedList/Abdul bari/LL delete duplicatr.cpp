#include<iostream>
using namespace std;

class node
{public:
    int data;
    node  *next;
}*first,*last;

void insrt(int value)
{
    node *t=new node;
    t->data=value;
    if(first==NULL)
    {
        first=t;
        last=t;
        t->next=NULL;
    }
    else
    {
        if(value>last->data)
        {
            last->next=t;
            t->next=0;
            last=t;
            return;
        }
        else
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

void duplidelt(node *p)
{
    int x,y;
    while(p->next)
    {
        x=p->data;
        y=(p->next)->data;
        if(x==y)
        {
            node *t;
            t=p->next;
            p->next=t->next;
            delete t;
            continue;
        }
        p=p->next;
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
    insrt(2);
    insrt(2);
    insrt(0);
    insrt(3);
    insrt(3);
    insrt(3);
    display(first);
    cout<<endl;
    duplidelt(first);
    display(first);
}
