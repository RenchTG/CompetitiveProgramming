#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n], sorted[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
    }
    sort(sorted,sorted+n);

    int p1 = 0, p2 = n-1, ans1 = -1, ans2 = -1;
    while (p1 < p2) {
        if (sorted[p1]+sorted[p2] == x) {
            ans1 = sorted[p1];
            ans2 = sorted[p2];
            break;
        }
        else if (sorted[p1]+sorted[p2] < x) p1++;
        else p2--;
    }

    int out1 = 0, out2 = 0;
    if (ans1 == -1 || ans2 == -1) cout << "IMPOSSIBLE" << endl;
    else {
        for (int i = 0; i < n; i++) if (a[i] == ans1) out1 = i+1;
        for (int i = 0; i < n; i++) if (a[i] == ans2 && i != out1-1) out2 = i+1;
        cout << min(out1,out2) << " " << max(out1,out2) << endl;
    }
}