#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 3, 4};
    unordered_set<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.insert(arr[i]);
    }

    cout << v.size();
}