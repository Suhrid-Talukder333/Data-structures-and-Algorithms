#include<stdio.h>

int main() {
    int a = 5; //integer type variable
    int *p = &a; // integer pointer usually has * in it and '&a' is pointing to the location of integer variable a
    printf("%d", *p);//here this is the pointer value of p which has * in it so this will output 5
    printf("The location of integer a is %d /n", &a);//this is the location of integer a
    printf("The location what the pointer is pointing is %d/n", p);//this is where p pointer is pointing to
    printf("The next pointer of p is %d", (p+1));//The next pointer which can hold an integer is going to be biger than p by 4 because integer takes 4 bytes
}