#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {30, 20, 5, 10, 8};
    int k;
    cin >> k;
    k--;
    sort(arr, arr + 5);
    cout << arr[k];
}