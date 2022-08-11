#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    bool good[n][n];
    bool piece[k][n][n];
    //input good
    for (int r = 0; r < n; r++) {
        string s;
        cin >> s;
        for (int c = 0; c < n; c++) {
            if (s[c] == '#') good[r][c] = true;
            else good[r][c] = false;
        }
    }
    //input piece
    for (int p = 0; p < k; p++) {
        for (int r = 0; r < n; r++) {
            string s;
            cin >> s;
            for (int c = 0; c < n; c++) {
                if (s[c] == '#') piece[p][r][c] = true;
                else piece[p][r][c] = false;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            for (int idx = -n+1; idx <= n-1; idx++) {
                for (int idy = -n+1; idy <= n-1; idy++) {
                    for (int jdx = -n+1; jdx <= n-1; jdx++) {
                        for (int jdy = -n+1; jdy <= n-1; jdy++) {

                        }
                    }
                }
            }
        }
    }
}