//given an array of numbers where there are triplets and only one unique number find the unique number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int bits[33] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int j = 0;
        while (arr[i] > 0)
        {
            bits[j] += (arr[i] & 1);
            arr[i] = arr[i] >> 1;
            j++;
        }
    }
    int ans = 0;
    int p = 1;
    for (int i = 0; i < 33; i++)
    {
        bits[i] %= 3;
        if (bits[i])
        {
            ans += pow(2, i);
        }
    }
    cout << ans;
}