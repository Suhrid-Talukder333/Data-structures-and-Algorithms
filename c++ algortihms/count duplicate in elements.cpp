#include<iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,2,2,3,4,4,6,6};
    int x=arr[0];
    int a=0;
    for(int i=1; i<=9; i++)
    {
        if(arr[i]==x)
        {
            a++;
        }
        else
           {
                x=arr[i];
                cout<<arr[i-1]<<"duplicate present"<<a++<<"times"<<endl;
                a=0;
            }
           }
}
