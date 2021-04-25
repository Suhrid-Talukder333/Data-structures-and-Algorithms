#include <bits/stdc++.h>
using namespace std;

void isEvenOrOdd(int n)
{
    if (n & 1)
    {
        cout << "ODD\n";
    }
    else
    {
        cout << "Even\n";
    }
}

bool getBit(int n, int i)
{
    return n & (1 << i);
}

void setBit(int &n, int i)
{
    n = (n | (1 << i));
}

void clearBit(int &n, int i)
{
    int mask = 1 << i;
    mask = ~(mask);
    n = (n & mask);
}

void updateBit(int &n, int i, int v)
{
    int mask = v << i;
    clearBit(n, i);
    n = (n | mask);
}

int main()
{
}