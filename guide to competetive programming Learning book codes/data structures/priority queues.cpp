#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();
    priority_queue<int, vector<int>, greater<int>> q2;
    q2.push(3);
    q2.push(5);
    q2.push(7);
    q2.push(2);
    cout << q2.top();
    q2.pop();
    cout << q2.top();
    q2.pop();
    q2.push(6);
    cout << q2.top();
    q2.pop();
}