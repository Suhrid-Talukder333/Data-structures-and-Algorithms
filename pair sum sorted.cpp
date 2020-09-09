#include<iostream>
using namespace std;

int main()
{
    int sum=10,i,j;
    int pcount=0;
    int arr[9]={1,3,4,5,6,8,9,10,12};
           i=0;
            j=9-1;
           while(i<j)
        {
                if(arr[i]+arr[j]==sum)
                {
                    pcount++;
                    i++;
                    j--;
                }
                else if(arr[i]+arr[j]>sum)
                {
                    j--;
                }
                else if(arr[i]+arr[j]<sum)
                {
                    i++;
                }
        }
       cout<<pcount;
}
