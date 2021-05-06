#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = ((n - 1) - 1) / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i); //maxheapify for increasing order sorting and minheapify for decreasing order sorting
    }
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    heapSort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}