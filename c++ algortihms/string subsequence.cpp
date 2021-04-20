#include <bits/stdc++.h>
using namespace std;

int subs(string input, string output[])
{
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int length = subs(smallString, output);
    for (int i = 0; i < length; i++)
    {
        output[i + length] = input[0] + output[i];
    }
    return 2 * length;
}

int main()
{
    string s;
    cin >> s;
    int size = pow(2, s.size());
    string *output = new string[size];
    int length = subs(s, output);
    for (int i = 0; i < length; i++)
    {
        cout << output[i] << endl;
    }
}