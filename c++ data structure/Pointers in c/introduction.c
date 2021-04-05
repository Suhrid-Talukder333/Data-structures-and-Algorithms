#include<stdio.h>

int main() {
    int a = 5; //integer type variable
    int *p = &a; // integer pointer usually has * in it and '&a' is pointing to the location of integer variable a
    printf("%d", *p);//here this is the pointer value of p which has * in it so this will output 5
}