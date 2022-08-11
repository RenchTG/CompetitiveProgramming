#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;

int main()
{
    queue<pair<ll,ll>> v;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            ll val, num;
            cin >> val >> num;
            v.push(make_pair(num,val));
        }
        else {
            int num;
            cin >> num;
            ll sum = 0;
            while (num > 0) {
                if (v.front().first >= num) {
                    sum += (num * v.front().second);
                    v.front().first -= num;
                    num = 0;
                }
                else {
                    sum += (v.front().first * v.front().second);
                    num -= v.front().first;
                    v.pop();
                }
            }
            cout << sum << endl;
        }
    }
}