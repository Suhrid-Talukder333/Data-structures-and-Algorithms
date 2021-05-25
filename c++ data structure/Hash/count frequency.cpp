#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 2, 3};
    unordered_map<int, int> m;
    for (int i = 0; i < 5; i++)
    {
        m[arr[i]]++;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
}