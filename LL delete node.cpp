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
        t->next=0;
    }
    else
    {
        if(value>last->data)
        {
            last->next=t;
            t->next=0;
            last=t;
        }
        else
        {
            if(value<=first->data)
            {
                t->next=first;
                first=t;
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
                        break;
                    }
                    else
                    {
                        p=p->next;
                    }
                }
            }
        }
    }
}

void delet(node *p,int pos)
{
    int u=1;
    node *t;
    while(p)
    {

            if(pos==1&&u==1)
            {
                t=first;
                first=first->next;
                delete t;
                return;
            }
            else
            {
                if(p->next==last&&pos==u+1)
                {
                    t=last;
                    p->next=0;
                    last=p;
                    delete t;
                    return;
                }
                else if(p->next!=last&&pos==u+1)
                {
                    t=p->next;
                    p->next=t->next;
                    delete t;
                    return;
                }
            }
        u++;
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
    insrttail(13);
    insrttail(1);
    insrttail(12);
    display(first);
    delet(first,2);
    cout<<endl;
    display(first);
}
