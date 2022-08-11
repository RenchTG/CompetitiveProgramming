#include <iostream>
using namespace std;

int X, Y, M, maxCap;
bool done = false;

int search(int numX, int numY)
{
    if (done) {return M;}
    maxCap = numX * X + numY * Y;
    if (maxCap > M) {return 0;}
    else if (maxCap == M) {done = true; return M;}
    if (maxCap + X <= M || maxCap + Y <= M) {
        maxCap = max(search(numX+1, numY), search(numX, numY+1));
    }
    return maxCap;
}

int main()
{
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> X >> Y >> M;
    cout << search(0, 0);
}