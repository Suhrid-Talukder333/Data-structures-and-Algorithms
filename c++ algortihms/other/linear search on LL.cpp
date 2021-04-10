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
    last=first;

    for(int i=1; i<length;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last = t;
    }
}

void sarch(node *p,int value)
{
    while(p)
    {
        if(p->data==value)
        {
            cout<<"found"<<p->data;
            return;
        }
        p=p->next;
    }
    cout<<"not found";
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    create(arr,10);
    sarch(first,10);

}
