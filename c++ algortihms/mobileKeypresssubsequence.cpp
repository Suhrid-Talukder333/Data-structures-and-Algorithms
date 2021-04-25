#include <bits/stdc++.h>
using namespace std;

string solution(int n, string output[], string arr[])
{
    int a = n / 10;
    int b = n % 10;
    if (a == 0)
    {
        return "";
    }
    string little = solution(b, output, arr);
    string s = arr[b - 1];
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < little.length(); j++)
        {
            output[little.length() + i] = little[j] + s[i];
            cout << output[little.length() + i] << endl;
        }
    }
    return "";
}

int main()
{
    int n;
    cin >> n;
    string arr[] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};
    string *output = new string[10000];
    solution(n, output, arr);
    for (int i = 0; i < 30; i++)
    {
        cout << output[i] << endl;
    }
}