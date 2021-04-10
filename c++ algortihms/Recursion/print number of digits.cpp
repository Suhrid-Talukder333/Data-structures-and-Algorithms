#include<bits/stdc++.h>
using namespace std;

int numberOfDigits(int n){
    int x = n/10;
    int y = n%10;
    cout<<y<<endl;
    if(x == 0){
        return 0;
    }
    return numberOfDigits(x);
}


int main() {
    int n;
    cin>>n;
    numberOfDigits(n);
}