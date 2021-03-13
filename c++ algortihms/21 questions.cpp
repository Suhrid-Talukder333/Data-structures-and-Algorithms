#include<iostream>
#include<string>
using namespace std;

string checker(int n)
{
    int x=58;
    if(n==x)
    {
        return "yes";
    }
    else if(x<n)
    {
        return "smaller";
    }
    else if(x>n)
    {
        return "greater";
    }
}

int guess(int low, int high)
{
   int middle=(low+high)/2;
   string answere=checker(middle);
   if(answere=="yes")
   {
       cout<<middle<<" yesss"<<endl;
       return 0;
   }
   else if(answere=="smaller")
   {
       cout<<middle<<"smaller"<<endl;
       guess(low, middle-1);
   }
   else if(answere=="greater")
   {
       cout<<middle<<" greater"<<endl;
       guess(middle+1,high);
   }
}
int main()
{
    guess(1,127);
}
