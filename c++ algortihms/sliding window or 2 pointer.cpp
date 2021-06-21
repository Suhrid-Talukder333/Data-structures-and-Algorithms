#include <bits/stdc++.h>
using namespace std;

//find the maximum sub array sum of k where k<=n size ;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    for (int i = 1, j = i + k - 1; j < 5; i++, j++)
    {
        int current_sum = sum;
        current_sum -= arr[i - 1];
        current_sum += arr[j];
        sum = max(current_sum, sum);
    }
    cout << sum;
}