#include <bits/stdc++.h>
using namespace std;

void multiplication(int *a, int &n, int i)
{
    int carry = 0;
    for (int j = 0; j < n; j++)
    {
        int product = (a[j] * i) + carry;
        a[j] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        a[n] = carry % 10;
        carry = carry / 10;
        n++;
    }
}

void factorial(int x)
{
    int *a = new int[1000];
    a[0] = 1;
    int n = 1;
    for (int i = 2; i <= x; i++)
    {
        multiplication(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}

int main()
{
    int x;
    cin >> x;
    factorial(x);
}