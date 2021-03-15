#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n"; // 3
}