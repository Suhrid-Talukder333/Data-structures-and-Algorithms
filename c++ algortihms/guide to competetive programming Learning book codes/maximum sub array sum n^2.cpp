#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        for (int j = i; j < 8; j++) {
            sum += arr[j];
            best = max(sum, best);
        }
    }
    cout << best;
}