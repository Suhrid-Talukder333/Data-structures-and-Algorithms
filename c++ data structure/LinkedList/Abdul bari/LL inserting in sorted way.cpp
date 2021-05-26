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
        if(value>last->data)
        {
            last->next=t;
            t->next=0;
            last=t;
        }
        else if(value<=last->data)
        {
            node *p;
            p=first;
            while(p)
            {
                if(value<=first->data)
                {
                    t->next=first;
                    first=t;
                    break;
                }
                else if(value<=(p->next)->data)
                {
                    t->next=p->next;
                    p->next=t;
                    break;
                }
                p=p->next;
            }
        }

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
    insrttail(3);
    insrttail(0);
    display(first);
}

