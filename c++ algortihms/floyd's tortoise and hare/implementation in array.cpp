//Floyd's tortoise and hare algortihm:
//This algorithm helps in detecting cycle in array or linked list.
//this has twp phases
//1. There will be two pointers where 1 will go at 1 speed(slow) and the other one will go double the speed(fast).
//in array they will go to the value pointer meaning if its in i pointer then it will go to the arr[i] position
//in the next iteration and the fast one will be 1 iteration ahead.
//so as they go through each iteration fast will have done n iteration and they will meet at same position in the cycle
//2. in phase 2, we keep the fast pointer in its place and the slow pointer in the starting of the array.
//now they will go at the same speed and meet in one position and that position will be the start of the cycle.

#include <bits/stdc++.h>
using namespace std;

void rabbitNtortoise(int arr[], int start, int end)
{
    int tortoise = 0;
    int hare = 0;
    //phase 1
    do
    {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    } while (tortoise != hare);
    //phase 1 end they meet at same point
    //phase 2
    tortoise = 0;
    do
    {
        tortoise = arr[tortoise];
        hare = arr[hare];
    } while (tortoise != hare);
    cout << tortoise << " " << hare;
}

int main()
{
    int arr[8] = {1, 3, 2, 4, 6, 5, 7, 3};
    rabbitNtortoise(arr, 0, 8);
}