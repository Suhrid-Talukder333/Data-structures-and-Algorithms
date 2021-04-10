#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

bool check_extend(vector<int>permu)
{
    int i=permu.size()-1;
    for(int j=0; j<i; j++)
    {
        if(i-j==abs(permu[i]-permu[j]))
        {
            return false;
        }
    }
    return true;
}

int gen_perm(int sum,vector<int>permu,int n)
{
    if(permu.size()==n)
    {
        for(int i=0; i<n;i++)
        {
            cout<<permu[i];
        }
        sum=sum+1;
        cout<<endl<<sum<<endl;
        cout<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(find(permu.begin(),permu.end(),i)==permu.end())
        {
            permu.push_back(i);
            if(check_extend(permu))
               gen_perm(sum,permu,n);
            permu.pop_back();
    }
}
}

int main()
{
    int n;
    int sum=0;
    vector<int>v;
    cin>>n;
    gen_perm(sum,v,n);
}
