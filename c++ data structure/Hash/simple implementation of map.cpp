#include <bits/stdc++.h>
using namespace std;

struct myMap
{
    int n;
    list<pair<int, int>> *table;

    myMap(int n)
    {
        n = n;
        table = new list<pair<int, int>>[n];
    }

    void insert(int key, int value)
    {
        int i = key % n;
        table[i].emplace_back(make_pair(key, value));
    }
    void remove(int key, int value)
    {
        int i = key % n;
        table[i].remove({key, value});
    }
    int search(int key)
    {
        int i = key % n;
        for (auto x : table[i])
        {
            if (x.first == key)
            {
                return x.second;
            }
        }
        return -1;
    }
};

int main()
{
    myMap myList(5);
    myList.insert(1, 10);
    myList.insert(2, 20);
    cout << myList.search(1) << endl;
    myList.remove(1, 10);
    cout << myList.search(1);
}