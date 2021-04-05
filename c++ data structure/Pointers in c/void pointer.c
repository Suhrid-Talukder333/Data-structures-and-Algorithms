#include<stdio.h>


int main() 
{
    int a =5;
    void *p;//generic pointer which means can hold any data type 
    p = &a;
    printf("This is address %d and value %d\n",a,&a);
    printf("This is value %d\n", p);//void pointers cannot be dereferenced and cannot be implemented with arithmatic operations this will give compile error
}