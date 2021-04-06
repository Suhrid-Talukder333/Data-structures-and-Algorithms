#include <stdio.h>

int main()
{
    int a[3][2][2] = {{{1, 2}, {3, 4}},
                      {{5, 6}, {7, 8}},
                      {{9, 10}, {11, 12}}};

    printf("%d\n", *(*(*(a)))); //this will output a[0][0][0]
    printf("%d\n", *(*(*(a+1)))); //this will output a[1][0][0]
    printf("%d\n", *(*(*(a)+1)));   //this will output a[0][1][0]
    printf("%d\n", *(*(*(a)))+1);     //this will output a[0][0][1]
}