#include <stdio.h>

int increment(int a)
{
    a += 1;
}
int callByReferenceIncrement(int *a)
{
    *a += 1;
}
int main()
{
    int a;
    a = 5;
    increment(a);
    printf("%d\n", a); //here we are using call by value where we cannot custmomize out variables in a function and use it in main function without returning it
    //so that is why even though a is being incremented the incremented value diseapers as it is not used in the main function
    //to cope with this problem we have to use call by refernce
    callByReferenceIncrement(&a);
    printf("%d\n", a); //now it is incremented
}