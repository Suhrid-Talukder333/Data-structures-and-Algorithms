//permutation is same as product rule but it can be shown as n p r where we have n items and we will choose r items
// and every time we choose an item that item cannot be chosen or taken again
//so lets say we have 5 coins of 1,2,3,4,5 now we have to tell how many ways i can choose 3 coins from all the coins
//where i cannot use one coin more than once
// for this if we think than we will see that for choosing the first coin we can choose from 5 coins which are
// 1,2,3,4,5 we can chooose any one coin from the 5 coins. So for the first choice we have 5 choices now for the next
// coin to choose we will have 5-1 = 4 coins so it will be decreasing by one as i choose
// put it in equation n p r = n * n-1 * n-2 * n-3 * n-4 .........untill the n-r th choosing in that case it will be
// n-r+1 . So n p r = n * n-1 * n-2 * n-3 * n-4 ...... (n-r+1)......
//we can see that it is close to factorial numbers
// we can write it as n * n-1 * n-2 * n-3 * n-4.......(n-r+1) * n-r *n-r-1 *.......3 * 2 * 1 == n!
//                                                              n-r * n-r-1 * .....3 * 2 * 1 == (n-r)!
//-------------------------------------------------------------------------------------------------
//                                                                          (n!)
//                                                                  ==================
//                                                                          (n-r)!


// but n! is a big number at least it has the potential to be very big which is largely time consuming and also will cross the limit of
// int64
// So for n p r we can compute n * n-1 * n-2 *... * n-r+1
// this is rather efficient

//For example: we have n boxes and k balls, how many different boxes can we fiil with k balls;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int k; cin >> k;
    long long ans=1;
    for(int i=0; i<k; i++)
    {
        ans*=(n-i);
    }
    cout<<ans;
}

