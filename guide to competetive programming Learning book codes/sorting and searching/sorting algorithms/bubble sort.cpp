#include<bits/stdc++.h>
using namespace std;

void swapping(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[8] = {1, 2, 2, 6, 3, 5, 9, 8};
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if(arr[i]>arr[j]) {
                swapping(&arr[i], &arr[j]);
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
}