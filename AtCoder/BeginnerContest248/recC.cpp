#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<int> seq;
int n, m, k;
ll cnt = 0;

void search(int x, int sum) {
    if (int(seq.size()) == n) {
        if (sum == k) cnt++;
        return;
    }
    for (int i = 1; i <= m; i++) {
        if (sum+i > k) return;
        seq.push_back(i);
        search(i, sum+i);
        seq.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m >> k;
    search(0,0);
    cout << cnt << endl;
}