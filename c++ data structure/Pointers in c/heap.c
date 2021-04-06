#include <stdio.h>
#include <stdlib.h>

int main()
{
    //malloc can allocate memory in the heap using pointers
    //the default malloc syntax is
    //void* malloc(n*sizeof(variable)) it returns a void pointer and n is the the number of elements and variables is the data type we want to create
    int *a;
    a = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    free(a); //this free's the allocation in the heap and avoids leakage in memory
    //calloc is also like malloc but has an argument to take the numbers of elements we want
    //the default calloc syntax is
    //void * calloc(elements_number, sizeof(variables))
    a = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        a[i] = i * 2;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    free(a);
    //realloc is used to allocate eisting memory and customize the size of the allocated memory;
    a = (int *)malloc(2 * sizeof(int));
    a[1] = 1;
    a[0] = 0;
    printf("%d %d\n", a[0], a[1]);
    a = (int *)realloc(a, 0);              //here the allocated memory will become zero which is same as free;
    a = (int *)realloc(NULL, sizeof(int)); //this is same as malloc
    a[0] = 10;
    printf("%d\n", a[0]);
}