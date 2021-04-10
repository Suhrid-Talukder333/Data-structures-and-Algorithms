//to create dynamic array we will use static array with some initial size then if the size of elements expand 
//more than the size then we have to create another array which double the size of the initial array
//then we have to copy every element to the new array
#include<bits/stdc++.h>
using namespace std;

template<class t>
class dynamicArray
{
    private:
    t *arr; // pointer for the dynamic array
    int length=0; //the user thinks the size
    int capacity=0; //the actual size
    public:
    dynamicArray()
    {
        this(16); //default initilizer
    }
    dynamicArray(int capacity)
    {
        if(capacity<0)
            throw "invalid capacity!\n";
        this->capacity=capacity;
        arr = new t[capacity];
    }
    int size()
    {
        return length;
    }
    bool isEmpty()
    {
        return size()==0;
    }
    t get(int index)
    {
        return arr[index];
    }
    void set(int index,t value)
    {
        arr[index]=value;
    }
    void clear()
    {
        for(int i=0; i<capacity; i++)
        {
            arr[i]=NULL;
        }
        length=0;
    }
    //adding value
    void add(t value)
    {
        //resizing
        if(length+1>=capacity)
        {
            if(capacity==0)
                capacity = 1;
            else
            {
                capacity *= 2; //double the size
            }
            t *new_arr = new t[capacity];
            for(int i=0; i<length; i++)
            {
                new_arr[i] = arr[i];
            }
            arr = new_arr;
        }
        arr[length++] = value;
    }
    //removes an element in a given index
    void removeAt(int index)
    {
        if(index>=length || index<0)
            throw "invalid index\n";
        t *new_arr=new t[length-1];
        for(int i=0, j=0; i<length; i++,j++)
        {
            if(i==index)
                j--; // skip that element for copying the array in new array;
            else
                new_arr[j]=arr[i];
        }
        arr= new_arr;
        capacity=length--;
    }
    //Remove value by searching iteratively and if found then decrease the size and copy the remaining elements
    //to a new arrat and initilize the previous array with the new one
    bool remove(t value)
    {
        for(int i=0; i<length; i++)
        {
            if(arr[i]==value)
            {
                removeAt(i);
                return true;
            }            
        }
        return false;
    }
    //get index of value given
    int indexOf(t value)
    {
        for(int i=0; i<length; i++)
        {
            if(arr[i]==value)
                return i;
        }
        return -1;
    }
    bool contains(t value)
    {
        return indexOf(value)!=-1;
    }

};

int main()
{
    dynamicArray<int>a(3);
    a.add(1);
    a.add(2);
    a.add(3);
    for(int i=0; i<(int)a.size(); i++)
    {
        cout<<a.get(i)<<" ";
    }
}
