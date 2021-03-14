#include<bits/stdc++.h>
using namespace std;

int arr[3] = {1, 2, 3};
vector<int> subset;
void search(int k, int n) {
    if(k==n+1) {
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << endl;
    }
    else {
        subset.push_back(arr[k]);
        search(k + 1,2);
        subset.pop_back();
        search(k + 1,2);
    }
}

int main() {
    search(0, 2);
}