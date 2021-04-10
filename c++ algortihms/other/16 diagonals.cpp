#include<iostream>
#include<vector>
using namespace std;

/*void checker(int n,int arr,int i,int j)
{
    if(i>0)           //i=0,j=1
    {
        if(arr[i+1][j-1]==1&&arr[i+1][j+1]==1&&arr[i-1][j-1]==1&&arr[i-1][j+1]==1||arr[i+1][j-1]==2&&arr[i+1][j+1]==2&&arr[i-1][j-1]==2&&arr[i-1][j+1]==2)
        {
            arr[i][j]=0;
        }
        else
        {
            if(arr[i+1][j-1]==1&&arr[i+1][j+1]==1&&arr[i-1][j-1]==1&&arr[i-1][j+1]==1)
            {
                arr[i][j]=2;
            else if(arr[i+1][j-1]==2&&arr[i+1][j+1]==2&&arr[i-1][j-1]==2&&arr[i-1][j+1]==2)
            {
                arr[i][j]=1;
            }
        }
    }
    else if(i==0)
    {
        v[i][j]=1;
    }
}*/

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    arr[0][0]=1;
    for(int i=0; i<n; i++)//row
    {
        for(int j=1; j<n; j++)//column
        {
            if(i>0&&j>)           //i=0,j=1
    {
        if(arr[i+1][j-1]==1&&arr[i+1][j+1]==1&&arr[i-1][j-1]==1&&arr[i-1][j+1]==1||arr[i+1][j-1]==2&&arr[i+1][j+1]==2&&arr[i-1][j-1]==2&&arr[i-1][j+1]==2)
        {
            arr[i][j]=0;
        }
        else
        {
            if(arr[i+1][j-1]==1&&arr[i+1][j+1]==1&&arr[i-1][j-1]==1&&arr[i-1][j+1]==1)
            {
                arr[i][j]=2;
            }
            else if(arr[i+1][j-1]==2&&arr[i+1][j+1]==2&&arr[i-1][j-1]==2&&arr[i-1][j+1]==2)
            {
                arr[i][j]=1;
            }
        }
    }
    else if(i==0)
    {
        arr[i][j]=1;
    }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
            if(j==n-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
