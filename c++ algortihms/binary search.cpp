#include<bits/stdc++.h>
using namespace std;
//binary search

int main() {
    int key = 30;
    int arr[5] = {1, 2, 3, 4, 5};
    int low = 0;
    int high = (sizeof(arr)/sizeof(arr[0])) - 1;
    while(low<=high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            cout << "found";
            return 0;
        }
        else if(arr[mid]>key) {
            high = mid-1;
        }
        else if(arr[mid]<key) {
            low = mid+1;
        }
    }
    cout << "not found";
}
