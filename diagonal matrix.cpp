#include<iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *p;
public:
    Diagonal()
    {
       n=2;
       p=new int[2];
    }
    Diagonal(int n)
    {
        this->n=n;
        p=new int[n];
    }
    ~Diagonal()
    {
        delete []p;
    }
    void display();
    int get(int i,int j);
    void Set(int i,int j,int value);
};

int Diagonal::get(int i,int j)
{
    if(i==j)
    {
        return p[i-1];
    }
    else
    {
        return 0;
    }
}
void Diagonal::Set(int i,int j,int value)
{
    if(i==j)
    {
        p[i-1]=value;
    }
}
void Diagonal::display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                cout<<" "<<p[i]<<" ";
            }
            else
            {
                cout<<" "<<0<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    Diagonal d(4);
    d.Set(1,1,3);
    d.Set(2,2,4);
    d.Set(3,3,5);
    d.Set(4,4,6);
    d.display();
}
