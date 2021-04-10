#include<bits/stdc++.h>
using namespace std;

int size=20;
int tree[20];
int heap_size=0;
//in array form the right child of a tree is found at 2i+1 index where i is the index of the parent node of that
//child
int get_right(int index)
{
    if((((2*index)+1)<size) && index>=1)
        return (2*index)+1;
    else
        return -1;
}

//in array form the right child of a tree is found at 2*i index where i is the parent of the node 
int get_left(int index)
{
    if(((2*index)<size) && index>=1)
        return 2*index;
    else
        return -1;
}
// a parent of an i indexed node can be found at i/2 node
int get_parent(int index)
{
    if((index>=1) && index<size)
        return index/2;
    else
        return -1;
}
// to have the heap property we need to do max-heapify
void max_heapify(int index)
{
    int largest=index;
    int left_child=get_left(index);
    int right_child=get_right(index);
    
    //see if heap ivarient is okay or not
    //for the left
    if(left_child<size && left_child>=1)
    {
        if(left_child>largest)
        {
            largest=left_child;
        }
    }
    //for the right
    if(right_child<size && right_child>=1)
    {
        if(right_child>largest)
        {
            largest=right_child;
        }
    }

    //if the heapify invarient is okay now then we will have the condition index==largest to be true
    //if not than we have to heapify again
    if(largest!=index)
    {
        swap(tree[index],tree[largest]);
        max_heapify(largest);
    }
}
//buil max-heap
void build_heap()
{
    int i;
    for(i=size/2; i>=1; i--)
    {
        max_heapify(i);
    }
}
//get the max or root value
int maximum()
{
    return tree[1];
}
//extract max meaning taking it or root out of the tree
int extract()
{
    int mx=tree[1];
    tree[1]=tree[size];
    tree[size]=NULL;
    size--;
    max_heapify(1);
}
//increase key if we want to insert
void insert(int key)
{
    size++;
        
}


int main()
{
    
}