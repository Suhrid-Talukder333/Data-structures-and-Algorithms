#include<iostream>
using namespace std;

int check[4][4];
int startx=-1,starty=-1;


void fid(char arr[])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(arr[i][j]=='S')
            {
                startx=i;
                starty=j;
            }
        }
    }
}

void searc(char arr[]),int x,int y)
{
    if(startx==-1&&starty==-1)
    {
        return false;
    }
    if(x<0||x>3||y<0||y>3)
    {
        return false;
    }
}
