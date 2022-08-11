#include <iostream>
using namespace std;

int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin >> n;
    int shells[3] = {0, 0, 0};
    int a[n], b[n], g[n], maxCount = 0;
    for (int ind = 0; ind < n; ind++) {cin >> a[ind]; a[ind]--; cin >> b[ind]; b[ind]--; cin >> g[ind]; g[ind]--;}
    for (int z = 0; z < 3; z++) {
        int count = 0;
        shells[z] = 1;
        for (int i = 0; i < n; i++) {
            int temp = shells[a[i]];
            shells[a[i]] = shells[b[i]];
            shells[b[i]] = temp;
            if (shells[g[i]] == 1) {
                count++;
            }
        }
        shells[0] = 0; shells[1] = 0; shells[2] = 0;
        maxCount = max(count, maxCount);
    }
    cout << maxCount << endl;
}