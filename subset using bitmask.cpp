#include<iostream>
using namespace std;

int main()
{
    char arr[4]={'A','B','C','D'};
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int tot=1<<n;
        for(int i=0; i<tot; i++)//to delete the empty set we start form 1
        {
            for(int j=0; j<n; j++)
            {
                int f;
                f=1<<j;
                if((i&f)!=0)
                {
                    cout<<arr[j]<<' ';
                }
            }
            cout<<endl;
        }
    }
}
