#include <bits/stdc++.h>
using namespace std;

int arr[] = {1, 4, 6, 5};
int size = (sizeof(arr) / sizeof(arr[0]));

void sort()
{
    for (int i = 0; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    cout << size << endl;
    sort();
    for (int i : arr)
    {
        cout << i << endl;
    }
}