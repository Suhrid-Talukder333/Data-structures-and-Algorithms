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

int mx(node *p)
{
    int x;
    if(p)
    {
        x=mx(p->next);
        return x>p->data?x:p->data;
    }
}

int mn(node *p)
{
    int x;
    if(p)
    {
        x=mn(p->next);
        return x>p->data?p->data:x;
    }
}


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    create(arr,10);
    cout<<mx(first)<<endl;
    cout<<mn(first);
}
