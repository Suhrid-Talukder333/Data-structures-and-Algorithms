#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int find = 5;
    int k = 0; //position of query index
    for (int b = 8 / 2; b>=1; b/=2) {
        while(k+b<8 && arr[k+b] <= find) {
            k += b;
        }
    }
    if(arr[k]==find) {
        cout << "ans " << k;
    }
}