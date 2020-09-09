#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int>mp;
    map<string,int>::iterator i;
    mp["suhrid6"]=1;
    mp["suhrid1"]=2;
    mp["suhrid5"]=3;
    mp["suhrid3"]=4;
    mp.insert(pair<string,int>("123",1123));
    for(i=mp.begin(); i!=mp.end(); i++)
    {
        cout<<i->second<<" "<<endl;

    }
}
