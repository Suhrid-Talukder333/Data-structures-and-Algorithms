#include <stdio.h>

int main()
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    printf("%d\n", a); //this will give us the address of first element of the 2d array which is a[0][0];
    printf("%d\n",*(*(a+1)+0));//this will point to a[1][0];
    printf("%d\n",*(*(a)));//this will point to a[0][0];
    printf("%d\n",*(*(a+1)+2));//this will point to a[1][2];
}