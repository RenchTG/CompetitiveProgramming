#include <iostream>
#include <algorithm>
using namespace std;

long long a[100];
int n, cnt, maxCnt = 0, maxSpot;

void checkRight(int i, int t) {
    if (a[i]+t >= a[i+1] && i < n - 1 && i < 100) {
        checkRight(i+1, t+1);
        //cout << a[i] << " EXPLODES " << a[i+1] << " WITH A RADIUS OF " << t << endl;
        cnt++;
    }
}

void checkLeft(int i, int t) {
    if (a[i]+t >= a[i-1] && i > 0) {
        checkLeft(i-1, t+1);
        //cout << a[i] << " EXPLODES " << a[i-1] << " WITH A RADIUS OF " << t << endl;
        cnt++;
    }
}

int main()
{
    //freopen("angry.in", "r", stdin);
    //freopen("angry.out", "w", stdout);
    cin >> n;
    for (int ind = 0; ind < n; ind++) {cin >> a[ind];}
    sort(a, a+n);
    //select a cow to shoot first
    for (int i = 0; i < n; i++) {
        //cout << "IF WE SHOOT COW AT POSITION: " << a[i] << endl;
        checkRight(i, 1);
        checkLeft(i, 1);
        if (cnt > maxCnt) {
            maxCnt = cnt;
            maxSpot = i;
        }
        cnt = 0;
    }

    cout << maxCnt;
}