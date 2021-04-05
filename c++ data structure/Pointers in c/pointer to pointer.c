#include<stdio.h>


int main() {
    int a =4;
    int *p;
    p = &a;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    printf("%d and %d\n",*p,p);
    printf("%d and %d\n", **q,q);
    printf("%d and %d\n", ***r,r);
    ***r= 10;
    printf("%d and %d\n", *p,p);
    printf("%d and %d\n", **q,q);
    printf("%d and %d\n", ***r,r);
}