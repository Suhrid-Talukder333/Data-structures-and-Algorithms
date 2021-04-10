#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> v(n, 0);

    while(q--) {
        int l, r;
        cin >> l >> r;
        v[l]++;
        if(r+1 < n) {
            v[r + 1]--;
        }
    }

    for (int i = 0; i<n; i++) {
        v[i + 1] += v[i];
    }

    for(int i : v) {
        cout << i;
    }
}