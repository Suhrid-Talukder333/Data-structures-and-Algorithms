#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 3, 4};
    unordered_set<int> s(arr, arr + 5);
    cout << s.size();
}