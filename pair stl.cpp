#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int ,double >p1={1,2.00};
    pair<int ,int >p2={3,4};
    cout<<p2.first;cout<<endl;
    cout<<p1.first;cout<<endl;
    cout<<get<int>(p1);
}

