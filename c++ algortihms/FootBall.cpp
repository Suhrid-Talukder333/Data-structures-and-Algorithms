#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr;
    string arr1;
    string arr2;
    int num,score1=0,score2=0,check=0;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        cin>>arr2;
        if(i==1)
        {
            arr=arr2;
        }
        if(arr2!=arr&&check==0)
        {
            check=1;
            arr1=arr2;
        }
        if(arr2==arr)
        {
            score1++;
        }
        else
        {
            score2++;
        }
    }
    if(score1>score2)
    {
        cout<<arr;
    }
    else
        cout<<arr1;
}
