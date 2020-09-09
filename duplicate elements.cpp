#include<iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,2,2,3,4,4,6,6};
    int x=arr[0];
    int a=0;
    for(int i=1; i<9; i++)
    {
        if(arr[i]==x)
        {
            a++;
            if(a==1)
            {
                cout<<x<<"duplicate present"<<endl;
            }

        }
        else
           {
                x=arr[i];
                a=0;
           }
    }
}
