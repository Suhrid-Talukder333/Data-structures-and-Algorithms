//if i th fibonacchi number is created depending on k previous terms then the first k-1 terms will
//be zero in the sequence

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 2;
    int m = 10; //how many numbers to print
    int arr[m];
    int i = 0;
    for (; i < n - 1; i++)
    {
        arr[i] = 0;
    }
    arr[n - 1] = 1;
    i++;
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }
    for (; i < m; i++)
    {
        arr[i] = sum;
        sum -= arr[i - n];
        sum += arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}