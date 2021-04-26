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

void clearBitsTilli(int &n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitsRange(int &n, int i, int j)
{ // i is the starting and j is the ending range
    int mask1 = (~0) << j;
    int mask2 = pow(2, i) - 1;
    int mask = mask1 | mask2;
    n = n & mask;
}

int main()
{
}