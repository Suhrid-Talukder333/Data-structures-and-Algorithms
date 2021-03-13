#include<iostream>
using namespace std;

long long fiboLastdigit(long long a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
           long long b[a];
           b[0]=0;
           b[1]=1;
           for(int i=2; i<=a; ++i)
            {
                b[i]=(b[i-1]%10)+(b[i-2]%10);
            }
           return b[a];
    }
}

long long fibo(long long a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
           long long b[a];
           b[0]=0;
           b[1]=1;
           for(int i=2; i<=a; ++i)
            {
                b[i]=(b[i-1])+(b[i-2]);
            }
           return b[a];
    }
}
long long fibo_counter(long long g,long long p)
{
    long long i;
    long long q[1];
  for(i=2; i<=g; i=i+1)
    {
        q[0]=fiboLastdigit(i);
        cout<<q[0]<<" "<<i<<endl;
        long long e=i+1;
        q[1]=fiboLastdigit(e);
        cout<<q[1]<<" "<<i<<endl;
      if(q[0]%p==0)
       {
           if(q[1]%p==1)
           {
               cout<<i<<endl;
               return i;
           }
           else
            continue;
       }
       else
        continue;
    }
}

int main()
{
    long long n,a,x,b;
    cin>>n>>x;
    a=fibo_counter(n,x);
    b=n%a;
    cout<<fibo(b)%x;

    return 0;
}
