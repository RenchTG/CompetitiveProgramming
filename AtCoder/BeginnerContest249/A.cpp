#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int aDist = 0, dDist = 0;
    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f;
    cin >> d >> e >> f;
    int x;
    cin >> x;
    int leftA = x, leftD = x;

    while (leftA) {
        int distTraveled = min(a, leftA);
        aDist += (distTraveled*b);
        leftA -= distTraveled;
        if (!leftA) break;
        int distRested = min(c, leftA);
        leftA -= distRested;
    }

    while (leftD) {
        int distTraveled = min(d, leftD);
        dDist += (distTraveled*e);
        leftD -= distTraveled;
        if (!leftD) break;
        int distRested = min(f, leftD);
        leftD -= distRested;
    }

    if (aDist > dDist) cout << "Takahashi" << endl;
    else if (aDist < dDist) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}