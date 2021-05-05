#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

bool comp(point a, point b)
{
    return a.x < b.x;
}

int main()
{
    point points[] = {{3, 2}, {2, 1}, {6, 7}};
    sort(points, points + 3, comp);
    for (int i = 0; i < 3; i++)
    {
        cout << points[i].x << " " << points[i].y << endl;
    }
}