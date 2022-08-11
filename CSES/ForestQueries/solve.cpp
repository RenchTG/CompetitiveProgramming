#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int prefix[n][n];
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            int up = 0, left = 0, diag = 0, pos = 0;
            if (r > 0) up = prefix[r-1][c];
            if (c > 0) left = prefix[r][c-1];
            if (r > 0 && c > 0) diag = prefix[r-1][c-1];
            if (a[r][c] == '*') pos++;
            prefix[r][c] = pos + up + left - diag;
        }
    }

    for (int i = 0; i < q; i++) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--; x1--; y2--; x2--;
        int bR = 0, bL = 0, tR = 0, tL = 0;
        bR = prefix[y2][x2];
        if (x1 > 0) bL = prefix[y2][x1-1];
        if (y1 > 0) tR = prefix[y1-1][x2];
        if (y1 > 0 && x1 > 0) tL = prefix[y1-1][x1-1];
        cout << bR - bL - tR + tL << endl;
    }
}