//a single link list has only acces to its next node but double linked lists have both the previous node and next
// node pointer
// We will also have reference to the lists head and tail which represent the first and the last node of the full
// list for removal and adding actions to be quick

#include<bits/stdc++.h>
using namespace std;

class doubleLinkedList
{
public:
    int size=0;
    class node
    {
    public:
        int data;
        // previous and the next node pointer
        node *next=NULL;
        //node class for representing nodes
        node *previous=NULL;
    }*head=NULL,*tail=NULL;
    //removing all nodes in O(n)
    void clear()
    {
        node *trav = head;
        while(trav!=NULL)
        {
            trav->previous=NULL;
            node *next = trav->next;
            trav->next=NULL;
            trav->data = NULL; 
            trav=next;
        }
        head=tail=trav=NULL;
        size=0;
    }
    //return size of list
    int knowsize()
    {
        return size;
    }
    //bool to know if its empty
    bool isEmpty()
    {
        return knowsize()==0;
    }
    //normal adding is default at last
    void add(int value)
    {
        addLast(value);
    }
    //adding in first
    void addFirst(int value)
    {
        if(isEmpty())
        {
            head=tail=new node;
        }
        else
        {
            head->previous=new node;
            head=head->previous;
        }
        size++;
    }
    //adding in the last
    void addLast(int value)
    {
        if(isEmpty())
        {
            head=tail=new node;
        }
        else
        {
            tail->next=new node;
            tail=tail->next;
        }
        size++;
    }
    //return head value if exists
    int peekFirst()
    {
        if(isEmpty())
            throw new runtime_error("empty list");
        return head->data;
    }
    //return tail value if exists
    int peekLast()
    {
        if(isEmpty())
            throw new runtime_error("empty list!");
        return tail->data;
    }
    //remove the first value or the head in the list O(n)
    void removeFirst()
    {
        if(isEmpty())
        {
            throw new runtime_error("empty list!");
        }
        head = head->next;
        --size;
        //we need to clean up pointers
        if(isEmpty())
        {
            tail=head=NULL;
        }
        else
        {
            head->previous=NULL;
        }
    }
    //remove from last or the tail value
    void removeLast()
    {
        if(isEmpty())
        {
            throw new runtime_error("empty list!");
        }
        tail=tail->previous;
        if(isEmpty())
        {
            head=tail=NULL;
        }
        else
        {
            tail->next=NULL;
        }
        --size;
    }
    private:
    //remove an arbitrary node from the list
    void remove(node *n)
    {
        //we will handle it n is head or tail differently
        //if n.previous is NULL then it is the head of the list
        if(n->previous==NULL)
            removeFirst();
        //if n.next is NULL then it is the tail
        if(n->next==NULL)
            removeLast();
        //if it  isn't head or tail then it will take O(n) time 
        //firstly we have to change n.previous.next and n.next.previous 
        n->next->previous=n->previous;
        n->previous->next=n->next;
        //memory clean up
        n->data=NULL;
        n=n->previous=n->next=NULL;
        --size;
    }
    //remove node using index
    public:
    void removeAt(int index)
    {
        node *trav=head;
        if(index<=size/2)
        {
            for(int i=0; i!=index; i++)
            {
                trav=trav->next;
            }
        }
        else
        {
            trav=tail;
            for(int i=size-1; i!=index; i--)
            {
                trav=trav->previous;
            }
        }
        return remove(trav);//using the private remove method
    }
    //remove node with particular value
    bool removeValue(int value)
    {
       node *trav;
       for(trav=head; trav->next!=NULL; trav=trav->next)  
       {
           remove(trav);
           return true;
       }
       return false;
    }
    //find index of a node equal to value
    int indexOf(int value)
    {
        node *trav=head;
        for(int i=0; trav->next!=NULL; i++,trav=trav->next)
        {
            if(trav->data==value)
            {
                return i;
            }
        }
        return -1;
    }
    //check if some value exists in list
    bool checkValue(int value)
    {
        return indexOf(value)!=-1;
    }
};







int main()
{
    doubleLinkedList dl;
    cout<<dl.knowsize()<<endl;
    dl.add(2);
    dl.add(3);
    cout<<dl.knowsize();
}