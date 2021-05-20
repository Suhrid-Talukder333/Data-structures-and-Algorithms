//find if a number is palindrom or not
#include <bits/stdc++.h>
using namespace std;

void isPalindrom(int n)
{
    int reverseNumber = 0;
    int temp = n;
    while (temp > 0)
    {
        reverseNumber = reverseNumber * 10 + (temp % 10);
        temp /= 10;
    }
    if (reverseNumber == n)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "not palindrom";
    }
}

int main()
{
    int n;
    cin >> n;
    isPalindrom(n);
}