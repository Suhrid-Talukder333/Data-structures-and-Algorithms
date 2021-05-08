#include <bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int n)
{
    int largest = -1;
    int secondlargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (largest == -1 && largest < arr[i])
        {
            largest = arr[i];
        }
        else if (largest != -1 && largest < arr[i])
        {
            secondlargest = max(largest, secondlargest);
            largest = arr[i];
        }
        else
        {
            secondlargest = max(arr[i], secondlargest);
        }
    }
    cout << secondlargest << " " << largest << endl;
}

int main()
{
    int arr[8] = {1, 34, 6, 2, 5, 8, 4, 10};
    secondLargest(arr, 8);
}