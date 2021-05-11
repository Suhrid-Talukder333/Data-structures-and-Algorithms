#include<bits/stdc++.h>
using namespace std;

int main()
{
    struct human{
        string name = "AKASH";
        string gender = "MALE";
    };
    struct student:public human{
        int id;
        char grade;
        student(int a,char b)
        {
            id=a;
            grade=b;
        }
    };

    student akash(101,'A');
    cout<<akash.name<<" "<<akash.gender<<" "<<akash.id<<" "<<akash.grade<<endl;
}
