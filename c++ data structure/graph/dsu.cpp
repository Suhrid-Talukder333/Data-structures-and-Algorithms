#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>par,size;

void make_set(int x)
{
    par[x]=x;
    size[x]++;
}

int find_par(int a)
{
    if(par[a]==a)
    {
        return a;
    }
    return par[a]=find_par(par[a]);
}

void make_union(int x, int y)
{
    int a=find_par(x);
    int b=find_par(y);
    if(b==a)
    {
        return ;
    }
    if(size[a]>size[b])
    {
        par[b]=a;
        size[a]+=size[b];
    }
    else
    {
        par[a]=b;
        size[b]+=size[a];
    }
    
}


int main()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        make_set(i);
    }

    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b; cin>>a>>b;
        make_union(a,b);
        cout<<"parent of "<<a <<" is "<<par[a]<<" & parent of "<< b <<" is "<<par[b]<<endl;
    }

}