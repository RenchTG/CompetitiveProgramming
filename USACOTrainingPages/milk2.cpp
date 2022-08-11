/*
ID: dobrano1
LANG: C++
PROG: milk2
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int ind = 0; ind < n; ind++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    int milkStart = v[0].first, milkEnd = v[0].second;
    for (int i = 0; i < int(v.size()) - 1; i++) {
        
    }
    cout << milkEnd - milkStart << " " <<   
    return 0;
}