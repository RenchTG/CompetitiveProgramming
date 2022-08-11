#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    double theta = atan((y*1.0)/x);
    double y2 = sin(theta);
    double x2 = cos(theta);
    cout << x2 << " " << y2;
}