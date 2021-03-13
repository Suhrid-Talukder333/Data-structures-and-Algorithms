#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int x,y,z,num,b=0;
    cin>>num;
    for(int i=1,j=2; i<num&&j<num; i++,j++)
    {
        if(sqrt(i*i+j*j)==j+1)
        {
            b++;
        }
    }
    cout<<b;
}
