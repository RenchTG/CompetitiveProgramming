#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    vector<int> prefix[n+1];
    for (int j = 1; j <= n; j++) {prefix[j].push_back(0);}
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) prefix[j].push_back(prefix[j][i]);
        prefix[a[i]][i+1]++;
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        cout << prefix[x][r] - prefix[x][l-1] << endl;
    }    
}