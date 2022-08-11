#include <iostream>
using namespace std;

int main()
{
    freopen("crossroad.in", "r", stdin);
    freopen("crossroad.out", "w", stdout);
    int n; cin >> n;
    int id[n], pos[n];
    for (int ind = 0; ind < n; ind++) {
        int a, b;
        cin >> a >> b;
        id[ind] = a;
        pos[ind] = b;
    }
    int totalCnt = 0;
    for (int i = 1; i <= 10; i++) {
        bool seenFirst = false;
        int crossCnt = 0, currentPos;
        for (int j = 0; j < n; j++) {
            if (id[j] == i && !seenFirst) {currentPos = pos[j]; seenFirst = true;}
            else if (id[j] == i && pos[j] != currentPos) {crossCnt++; currentPos = pos[j];}
        }
        totalCnt += crossCnt;
    }
    cout << totalCnt;
}