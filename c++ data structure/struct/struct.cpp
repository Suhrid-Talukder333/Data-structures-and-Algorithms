#include<bits/stdc++.h>
using namespace std;

typedef struct point{
    int x;
    int y;
}p;
struct student{
    string name;
    int id;
};

int main()
{
    p xcor;
    xcor.x= 10;
    xcor.y = 20;
    cout<<xcor.x<<" "<<xcor.y<<endl;

    student akash={"AKASH HASAN"};//if any of the properties is initialized then all the other ones will be 0 by default
    cout<<akash.name<<" "<<akash.id<<endl;
}
