#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
}*first;

void create(int arr[],int length)
{
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=0;
    last = first;

    for(int i=1; i<length; i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void insrt(node *p,int value, int pos)
{
    int i=1;
    node *t;
    t=new node;
    t->data=value;
    while(p)
    {

        if(i==pos)
        {
            if(i==1)
            {
                t->next=first;
                first=t;
                return;
            }
            else
            {
                t->next=p->next;
                p->next=p;
                return;
            }
        }
        if(p->next==0)
        {
            p->next=t;
            t->next=0;
            return;
        }
        else
        {
            p=p->next;
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
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    create(arr,10);
    insrt(first,10,1);
    display(first);

}
