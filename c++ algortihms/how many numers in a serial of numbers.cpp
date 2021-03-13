//if they have equal amount of distance from each numbers how many numbers are there in a  series from x to y where x is the start
// and y is the last number in the series
// This are called arithmatic progressions
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //4,7,10,13,.........304
    //how many numbers in between 13 and 304
    int arr[4];
    int sum=0;
    for(int i=0; i<4; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int end; cin >> end; // the answere can be found if we subtract the first number from the last and then divide that number with the difference of each number
    int def = arr[1] - arr[0];
    cout<<(end-arr[0])/(def);
}