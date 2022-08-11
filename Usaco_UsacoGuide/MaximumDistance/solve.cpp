#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], xDist, yDist, high = 0;
    for (int ind = 0; ind < n; ind++) {cin >> x[ind];}
    for (int ind2 = 0; ind2 < n; ind2++) {cin >> y[ind2];}
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            xDist = abs(x[i] - x[j]);
            yDist = abs(y[i] - y[j]);
            high = max(high, xDist*xDist + yDist*yDist);
        }
    }
    cout << high << endl;
}