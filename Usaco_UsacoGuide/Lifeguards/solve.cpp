#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n; cin >> n;
    int a[1000]; for (int l = 0; l < 1000; l++) {a[l] = 0;}
    vector<pair<int, int>> v;
    for (int ind = 0; ind < n; ind++) {int a, b; cin >> a >> b; v.push_back(make_pair(a, b));}
    for (auto z : v) {
        for (int k = z.first; k < z.second; k++) {
            a[k]++;
        }
    }
    int maxCover = 0;
    for (int i = 0; i < n; i++) {
        int cover = 0;
        for (int j = v[i].first; j < v[i].second; j++) {a[j]--;}
        for (int x : a) {if (x != 0) cover++;}
        maxCover = max(cover, maxCover);
        for (int j = v[i].first; j < v[i].second; j++) {a[j]++;}
    }
    cout << maxCover << endl;
}