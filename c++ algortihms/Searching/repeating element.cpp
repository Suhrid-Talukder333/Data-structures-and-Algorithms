//conditions:
//array size n>=2
//only one element repeats
//all the elements 0 to max element are present
//this equation holds true: 0<=count of max(element)<=n-2
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int slow = arr[0] + 1;
    int fast = arr[0] + 1;
    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    } while (slow != fast);

    slow = arr[0] + 1;
    do
    {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    } while (slow != fast);
    cout << slow - 1;
}

int main()
{
    int arr[6] = {0, 2, 1, 3, 2, 2};
    solve(arr, 6);
}