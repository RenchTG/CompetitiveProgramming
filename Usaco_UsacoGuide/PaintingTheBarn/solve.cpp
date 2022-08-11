#include <iostream>
using namespace std;

int barn[1001][1002];
int dif[1001][1002];

int main()
{
    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        y2--; x2--;
        for (int j = y1; j <= y2; j++) {
            dif[j][x1]++;
            dif[j][x2+1]--;
        }
    }

    int total = 0, ret = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            total += dif[i][j];
            barn[i][j] = total;
            if (barn[i][j] == k) ret++;
        }
    }

    cout << ret << endl;
}