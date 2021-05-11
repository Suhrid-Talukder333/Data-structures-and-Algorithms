#include<bits/stdc++.h>
using namespace std;

struct point{
        int x=10;
        int y=20;
    }__attribute__((packed));

    void display(point &s){
        cout<<s.x<<" function display "<<s.y<<endl;
    }
int main()
{

    point xcor;
    point *pt;//pointer for point structure type
    pt = &xcor;
    cout<<pt->x<<" "<<pt->y<<endl;//we need -> this symbol to access members of structures using pointers
    //struct array
    point points[5];
    for(int i=0; i<5; i++)
    {
        cout<<points[i].x*i<<" "<<points[i].y*i<<endl;
    }
    //passing structs in function as arguments

    display(xcor);
}
