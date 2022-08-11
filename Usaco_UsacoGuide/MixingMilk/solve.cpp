#include <iostream>
using namespace std;

int main() 
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int amount[3], capacity[3], a, c, i = 0, j = 1;
    for (int ind = 0; ind < 3; ind++) {
        cin >> c; cin >> a;
        capacity[ind] = c; amount[ind] = a;
    }
    for (int index = 0; index < 100; index++) {
        if (amount[i] + amount[j] <= capacity[j]) {
            amount[j] += amount[i];
            amount[i] = 0;
        }
        else {
            amount[i] -= capacity[j] - amount[j];
            amount[j] = capacity[j];
        }
        if (i < 2) {i++; j++;}
        else {i = 0; j++;}
        if (j == 3) {j = 0;}
    }
    cout << amount[0] << endl << amount[1] << endl << amount[2] << endl;
}