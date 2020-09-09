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
        return ;
    }
    else
    {
        if(value>last->data)
        {
            t->next=0;
            last->next=t;
            last =t;
            return ;
        }
        else
        {
            if(value<first->data)
                {
                    t->next=first;
                    first=t;
                    return;
                }

           else
           {node *p;
            p=first;
            while(p)
            {
                    if(value<=(p->next)->data)
                    {
                        t->next=(p->next);
                        p->next=t;
                        return ;
                    }
                    p=p->next;

        }

    }
}
}
}

display(node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void insrt_in_arr(int arr[])
{
    int i=0;
    node *p;
    p=first;
    while(p)
    {
        arr[i++]=p->data;
        p=p->next;
    }
}

void revers(int arr[],int length)
{
    int i=length-1;
    node *p;
    p=first;
    while(p)
    {
        p->data=arr[i--];
        p=p->next;
    }
}

int main()
{
    insrt(1);
    insrt(2);
    insrt(5);
    insrt(3);
    int arr[4];
    insrt_in_arr(arr);
    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    display(first);
    revers(arr,4);
    cout<<endl;
    display(first);

}
