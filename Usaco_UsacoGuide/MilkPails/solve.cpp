#include <iostream>
using namespace std;

int main()
{
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int X, Y, M, maxCap = 0;
    cin >> X >> Y >> M;
    
    for (int numX = 0; numX <= M / X; numX++) {
        for (int numY = 0; numY <= M / Y; numY++) {
            int total = numX*X + numY*Y;
            if (total <= M) {
                maxCap = max(maxCap, total);
            }
        }
    }

    cout << maxCap;
}