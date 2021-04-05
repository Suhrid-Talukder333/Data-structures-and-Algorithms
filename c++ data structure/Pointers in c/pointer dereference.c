#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;
    printf("The address of p is %d and the value is %d\n", p, *p);
    printf("The address of p is %d and the value is %d\n", (p+1), *(p+1));
    char *p0;
    p0 = (char *)p;
    printf("The address of p is %d and the value is %d\n", p0, *p0);
    printf("The address of p is %d and the value is %d\n", (p0 + 1), *(p0 + 1));
}