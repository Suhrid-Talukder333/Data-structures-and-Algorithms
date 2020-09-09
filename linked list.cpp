#include<iostream>
using namespace std;

class node
{public:
    int data;
    node* next;
}*first=NULL;

void create(int arr[],int length)
{
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(int i=1; i<length; i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    create(arr,5);
    display(first);
}
