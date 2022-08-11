#include <iostream>
using namespace std;

int main()
{
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin >> x >> y;
    int currentPos = x, distance = 1, count = 0;
    while ((x < y && currentPos < y) || (x > y && currentPos > y)) {
        count += abs(x + distance - currentPos);
        currentPos = x + distance;
        distance *= -2;
    }
    cout << count - abs(y-currentPos) << endl;
}