#include<iostream>
using namespace std;

bool palindrom(char arr[])
{
    int j;
    for(int i=0; arr[i]!='\0'; i++)
    {
        j=i;
    }

    for(int i=0; i<j; i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    char arr[100];
    gets(arr);
    if(palindrom(arr))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
