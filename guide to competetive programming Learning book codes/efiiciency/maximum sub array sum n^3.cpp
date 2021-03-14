#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            int sum1 = 0;
            for (int k = i; k <= j; k++)
            {
                sum1 += arr[k];
            }
            sum = max(sum, sum1);
        }
    }
    cout<<sum;
}