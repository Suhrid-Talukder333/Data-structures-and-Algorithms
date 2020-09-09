#include<iostream>
using namespace std;

void capital(char arr[])
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>=97)
        {
            arr[i]=arr[i]-'a'+'A';
        }

    }
}

void compare(char arr[],char arr1[])
{
    capital(arr);
    capital(arr1);
    for(int i=0; arr[i]!='\0'&&arr1[i]!='\0';i++)
    {
        if(arr[i]!=arr1[i])
        {
            if(arr[i]>arr1[i])
            {
                cout<<"number 1 string is greater";
                return;
            }
            else
            {
                cout<<"no 2 is greater";
                return;
            }
        }
    }
    cout<<"same";
    return;
}

int main()
{
    char arr[100],arr1[100];
    gets(arr);
    gets(arr1);
    compare(arr,arr1);
}
