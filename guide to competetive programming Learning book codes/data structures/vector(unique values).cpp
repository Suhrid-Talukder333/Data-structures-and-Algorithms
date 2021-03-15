#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> a = {1, 2, 2, 3, 4, 5, 5};
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}