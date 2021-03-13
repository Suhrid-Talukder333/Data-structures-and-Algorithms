#include<iostream>
using namespace std;

void revers(char arr[])
{
    char temp;
    int j;
    for(int i=0; arr[i]!='\0'; i++)
    {
        j=i;
    }
    for(int i=0;i<j; i++,j--)
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
}

int main()
{
    char arr[100];
    gets(arr);
    revers(arr);
    cout<<arr;
}
