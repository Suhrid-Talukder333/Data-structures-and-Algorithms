#include<iostream>
using namespace std;

int kaden(int arr[],int n)
{
    int current_max=arr[0],max_till_here=arr[0];
    for(int i=1; i<n; i++)
    {
        current_max=max(arr[i],arr[i]+current_max);
        max_till_here=max(max_till_here,current_max);
    }
    return max_till_here;
}




int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<kaden(arr,n);
}
