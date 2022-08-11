#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const pair<int,int>& x, const pair<int,int>& y) {return x.second < y.second;}

int main()
{
    int n; cin >> n;
    pair<int,int> dif[2*n];
    for (int i = 0; i < 2*n; i+=2) {
        int a, b;
        cin >> a >> b;
        dif[i] = {1,a};
        dif[i+1] = {-1,b};
    }
    sort(dif,dif+2*n, cmp);
    int ret = 0, cnt = 0;
    for (int i = 0; i < 2*n; i++) {
        cnt += dif[i].first;
        ret = max(ret,cnt); 
    }
    cout << ret << endl;
}