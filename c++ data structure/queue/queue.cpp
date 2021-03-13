#include<bits/stdc++.h>
using namespace std;

int store[100];
int top = 0, bottom = 0;

void push(int value) {
    store[top++] = value;
}

int pop() {
    int x = store[bottom++];
    return x;
}

bool isEmpty() {
    return (top == bottom);
}

void print() {
    for (int i = bottom; i < top; i++) {
        cout << store[i] << endl;
    }
}

int main() {
    push(1);
    push(2);
    pop();
    print();
}