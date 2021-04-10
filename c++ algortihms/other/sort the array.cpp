#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int n,check=0,a=0,b=0,d=0;
    scanf("%d",&n);
    int arr[n+1],arr1[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }
    sort(arr1+1,arr1+n+1);
    for(int i=1; i<=n; i++)
    {
        if(arr[i]!=arr1[i])
        {
            d=1;
        }
    }
    if(d==0)
    {
        printf("yes \n");
        printf("1 1");
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        if(check==0&&arr[i]!=arr1[i])
        {
            a=i;
            check=1;
        }
        if(check==1&&arr[i]!=arr1[i])
        {
            b=i;
        }
    }
    for(int i=a,j=b; i<j; i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]!=arr1[i])
        {
            printf("no");
            return 0;
        }
    }
   printf("yes \n");
    printf("%d %d",a,b);

}

