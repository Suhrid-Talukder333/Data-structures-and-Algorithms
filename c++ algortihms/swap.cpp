#include<iostream>
using namespace std;

/*void swap(int *x, int *x)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}*/


void  swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}


int main()
{
    int a =3,b=9;
    swap(a,b);
    cout<<a<<" "<<b;
}
