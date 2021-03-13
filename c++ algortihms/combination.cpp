#include<bits/stdc++.h>
using namespace std;

//Combination is closely similar to permutation but in this case the order doesn't matter
// Lets say that there are two numbers a ,b ,c now we have to order them in some kind of way
// in this case abc is not equal to acb or bac. even though they seem alike they are not considered the same
// so we can say that every order creates unique answere so that is why this method is called permutation
//But lets say there are 1,2,3 numbers of the 3 numbers how many sums can we find choosing 2 numbers from those 3 every time
//In this case if we take 1 and 2 we will have 3 as sum but if we also take 2 and 1 then it will also result in 3
// so even if the order is changed the result is the same
// Now we might know that if in permutation we find duplicates we have divide the answere with factorial of the number of duplicate items
//So in combinations as the order doesnt matter their can be duplicate answere most probably ther can be r items of duplicates in n p r
// so we divide that duplicate items factorial with n p r
// thats why n c r == 
//                    (n!)
//----------------------------
//                  (r!)(n-r)!

//For Example:
// From 1,2,4,8 if we choose 2 items every time how many differernt sum of numbers will we get?
// so n=4 and r=2

int main()
{
    int n = 4, r = 2;
    long long permu=n*(n-1);//n * n -1  meanning n p r = (n!)/(n-r)!
    long long combination = permu/(r*(r-1));
    cout<<combination;
}