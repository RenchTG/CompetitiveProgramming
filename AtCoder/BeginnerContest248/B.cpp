#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll a, b, k;
    cin >> a >> b >> k;
    int count = 0;
    while (a < b) {
        a *= k;
        count++;
    }
    cout << count << endl;
}