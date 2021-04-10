#include<iostream>
#include<string>
using namespace std;

int wordcount(char arr[])
{
    int wcount=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]==' '&&arr[i-1]!=' ')
        {
            wcount++;
        }
    }
    return wcount+1;
}
int main()
{
    char str[14];
    int wcount=0;
    gets(str);
    cout<<wordcount(str);
}
