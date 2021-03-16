#include<bits/stdc++.h>
using namespace std;

int coins[3] = {1, 3, 4};

int search(int x) {
    if(x<0) {
        return 0;
    }
    if(x==0) {
        return 1;
    }
    int best = 0;
    for (int i = 0; i < 3; i++) {
        best += search(x - coins[i]);
    }
    return best;
}

int main() {
    int x;
    cin >> x;
    cout << search(x);
}