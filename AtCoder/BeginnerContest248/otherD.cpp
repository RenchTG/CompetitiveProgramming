#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        int cnt = 0;
        for (int j = l-1; j < r; j++) if (a[j] == x) cnt++;
        cout << cnt << endl;
    }    
}