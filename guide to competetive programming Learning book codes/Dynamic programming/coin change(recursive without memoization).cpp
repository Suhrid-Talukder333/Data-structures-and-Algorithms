#include<bits/stdc++.h>
using namespace std;

int coins[3] = {1, 3, 4};
int search(int x) {
    if(x<0) {
        return 99999;
    }
    if(x==0) {
        return 0;
    }
    int best = 99999;
    for (int i = 0; i < 3; i++) {
        best = min(best, search(x-coins[i])+1);
    }
   
    return best;
}

int main() {
    int x;
    cin >> x;
    cout<< search(x);
}