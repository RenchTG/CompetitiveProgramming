#include <iostream>
#include <vector>
using namespace std;

bool b[2000];

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        vector<int> c;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c.push_back(a[i]);
        }

        vector<vector<int>> steps;
        steps.push_back(c);
        bool changed = 1;
        while(changed) {
            changed = 0;
            for (int i = 0; i < n; i++) {
                if (b[i]) continue;
                int cnt = 0;
                vector<int> loc = {};
                for (int j = 0; j < n; j++) {
                    if (a[j] == a[i] && !b[j]) {
                        cnt++;
                        loc.push_back(j);
                    }
                }
                if (a[i] != cnt) {
                    changed = 1;
                    for (int z : loc) a[z] = cnt;
                }
                for (int z : loc) b[z] = 1;
            }
            vector<int> c;
            for (int i = 0; i < n; i++) {
                b[i] = 0;
                c.push_back(a[i]);
            }
            steps.push_back(c);
        }

        int q; cin >> q;
        for (int i = 0; i < q; i++) {
            int x, k;
            cin >> x >> k;
            if (k >= int(steps.size())) k = int(steps.size())-1;
            cout << steps[k][x-1] << endl;
        }
    }
}