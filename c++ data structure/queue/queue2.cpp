//queue can be implemented using static arrays but if we use static arrays we have to be careful about the size
//we can also implement using linked list
//there are 3 methods in queue container
//1. enqueue (to add in the last)
//2. dequeue (to remove from front)
//3. peektop (to show the top data)

#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size=0;
    class node
    {
    public:
        int data;
        node* next=NULL;
        node* previous=NULL;
    }*head=NULL,*tail=NULL;

    //get the size
    int Size()
    {
        return size;

    }
    //bool for if its empty or not
    bool isEmpty()
    {
        return size==0;
    }
    //dequeue method for deleting / removing the first data
    void dequeue()
    {   
        if(isEmpty())
        {
            throw runtime_error("empty list");
        }
        else
        {
            head->next->previous=NULL;
            head=head->next;
            size--;
        }
    }
    //for enqueue 
    void enqueue(int value)
    {
        if(isEmpty())
        {
            tail = new node;
            tail->data=value;
            head=tail;
            size++;
        }
        else
        {
            node *temp;
            temp= new node;
            temp->data=value;
            temp->previous=tail->next;
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    //display head
    void top()
    {
        if(isEmpty())
        {
            throw runtime_error("empty list!");
        }
        else
        {
            cout<<head->data<<endl;
        }
    }
};

int main()
{
    Queue q;
    cout<<q.Size()<<endl;
    q.enqueue(1);
    q.top();
    q.enqueue(2);
    q.top();
    cout<<q.Size()<<endl;
    q.dequeue();
    q.top();
}