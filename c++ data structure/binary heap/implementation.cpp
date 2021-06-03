#include <bits/stdc++.h>
using namespace std;

class minHeap
{
    int *arr;
    int size;
    int cap;

    minHeap(int x)
    {
        arr = new int[x];
        size = 0;
        cap = x;
    }

    int left(int i)
    {
        return 2 * i + 1;
    }

    int right(int i)
    {
        return 2 * i + 2;
    }

    int parent(int i)
    {
        return ((i - 1) / 2);
    }
};
