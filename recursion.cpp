#include<iostream>
using namespace std;


/*int fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
    }
}      output:10 9 8 7 6 5 4 3 2 1 */

int fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}//output:1 2 3 4 5 6 7 8 9 10

int main()
{
    int x=10;
    fun(x);

}
