#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n, int s, int i){
    if(i==n){
        return s;
    }
    s+= arr[i];
    return sum(arr,n,s,++i);
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n,0,0)<<endl;
}