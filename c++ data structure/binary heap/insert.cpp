#include <bits/stdc++.h>
using namespace std;

class minHeap
{
public:
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

    void doInsert(int x)
    {
        if (size == cap)
        {
            return;
        }
        else
        {
            size++;
            arr[size - 1] = x;
            for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
            {
                swap(arr[i], arr[parent(i)]);
                i = parent(i);
            }
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    minHeap a(5);
    a.doInsert(2);
    a.doInsert(10);
    a.display();
    a.doInsert(9);
    a.doInsert(5);
    a.display();
}