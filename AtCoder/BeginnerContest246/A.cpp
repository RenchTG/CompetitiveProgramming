#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int finalX;
    if (x1 == x2) finalX = x3;
    else if (x2 == x3) finalX = x1;
    else if (x1 == x3) finalX = x2;

    int finalY;
    if (y1 == y2) finalY = y3;
    else if (y2 == y3) finalY = y1;
    else if (y1 == y3) finalY = y2;

    cout << finalX << " " << finalY << endl;
}