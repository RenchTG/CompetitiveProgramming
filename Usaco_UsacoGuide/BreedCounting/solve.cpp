#include <iostream>
using namespace std;

int main()
{
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    int ones[n+1], twos[n+1], threes[n+1];
    ones[0] = 0; twos[0] = 0; threes[0] = 0;
    for (int i = 0; i < n; i++) {
        ones[i+1] = ones[i];
        twos[i+1] = twos[i];
        threes[i+1] = threes[i];
        if (a[i] == 1) ones[i+1]++;
        else if (a[i] == 2) twos[i+1]++;
        else if (a[i] == 3) threes[i+1]++;
    }

    for (int t = 0; t < q; t++) {
        int l, r;
        cin >> l >> r;
        cout << ones[r] - ones[l-1] << " " << twos[r] - twos[l-1] << " " << threes[r] - threes[l-1] << endl;
    }
}