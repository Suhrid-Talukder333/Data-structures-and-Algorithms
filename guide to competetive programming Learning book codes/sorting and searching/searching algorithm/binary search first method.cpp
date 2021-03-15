#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int find = 5;
    int low = 0;
    int high = 7;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid]==find) {
            cout << "ans " << mid;
            break;
        }
        else if(arr[mid]<find) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}