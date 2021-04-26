//lets say we have a number in binary n=1000000 now another number m=1010 we want the i=2 and j=5 position bits
//of n to be same as m
//index start with 0

#include <bits/stdc++.h>
using namespace std;

void clearBitInRange(int &n, int i, int j)
{
    int mask1 = (~0) << (j + 1);
    int mask2 = pow(2, i) - 1;
    int mask = mask1 | mask2;
    n = n & mask;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int i, j;
    cin >> i >> j;
    clearBitInRange(n, i, j);
    m = m << i;
    n = n | m;
    cout << n;
}