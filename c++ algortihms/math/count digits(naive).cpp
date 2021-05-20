#include <bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
    int digits = 0;
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
    cout << digits;
}

int main()
{
    int n;
    cin >> n;
    countDigit(n);
}