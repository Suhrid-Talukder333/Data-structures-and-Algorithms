#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int coins[3] = {1, 3, 4};
    int value[n + 1];
    value[0] = 1;
    for (int x = 1; x <= n; x++) {
        value[x] = 0;
        for (int i = 0; i < 3; i++) {
            if(x-coins[i]>=0) {
                value[x] += value[x - coins[i]];
            }
        }
    }
    cout << value[n];
}