#include<iostream>
using namespace std;

void toh(int n,int a, int b, int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        cout<<"from"<<a<<" to "<<b<<" by using "<<c<<endl;;
        toh(n-1,b,a,c);
    }
}

int main()
{
    toh(3,1,2,3);
}
