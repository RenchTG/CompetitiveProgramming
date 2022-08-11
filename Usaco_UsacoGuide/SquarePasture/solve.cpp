#include <iostream>
#include <math.h>
using namespace std;

struct rect
{
    int x1, y1, x2, y2;
};

int bigRect(rect p, rect q)
{
    int xCover = max(p.x2, q.x2) - min(p.x1, q.x1);
    int yCover = max(p.y2, q.y2) - min(p.y1, q.y1);
    return pow(max(xCover, yCover), 2);
}

int main()
{
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cout << bigRect(a, b);
}