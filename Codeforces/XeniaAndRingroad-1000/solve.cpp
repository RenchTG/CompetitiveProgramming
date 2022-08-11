#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int ind = 0; ind < m; ind++) cin >> a[ind];

    int loc = 1;
    ll dist = 0;
    for (int i = 0; i < m; i++) {
        if (loc < a[i]) {
            dist += a[i] - loc;
            loc = a[i];
        }
        else if (loc > a[i]) {
            dist += (n-loc) + a[i];
            loc = a[i];
        }
    }
    cout << dist << endl;
}