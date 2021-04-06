#include<stdio.h>

int add (int a,int b){
    return a+b;
}
void print(char a[]){
    printf("%s",a);
}

int main() {
    int (*p)(int,int);
    p = add;
    int c = p(2,3);
    printf("%d",c);
    void (*x)(char []);
    x = print;
    x("hey");
}