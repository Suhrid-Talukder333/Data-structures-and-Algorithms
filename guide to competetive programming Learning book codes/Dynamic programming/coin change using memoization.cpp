#include<bits/stdc++.h>
using namespace std;

bool ready[999];
int value[999];
int coins[3] = {1, 3, 4};

int search(int x) {
    if(x<0) {
        return 999;
    }
    if(x==0) {
        return 0;
    }
    if(ready[x]) {
        return value[x];
    }
    int best = 999;
    for (int i = 0; i < 3; i++) {
        best = min(best, search(x - coins[i]) + 1);
    }
    ready[x] = true;
    value[x] = best;
    return best;
}

int main()
{
    int x;
    cin >> x;
    cout<< search(x);
}