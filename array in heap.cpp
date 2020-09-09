#include<iostream>
using namespace std;

int main()
{
    int *p,k=1;
    p=new int[5];
    for(int i=0; i<5; ++i)
    {
        p[i]=k++;
    }
    for(int i=0; i<5; ++i)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
}
