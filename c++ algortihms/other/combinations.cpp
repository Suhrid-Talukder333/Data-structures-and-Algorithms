#include<bits/stdc++.h>
using namespace std;

int C[50][100];

int main()
{
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<100; j++)
        {
            C[i][j]=(j==0)?1:((i==0)?0:C[i-1][j]+C[i-1][j-1]);
        }
    }
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<100; j++)
        {
            if(C[i][j]>0)
            {
                cout<<C[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}