#include <iostream>
using namespace std;

int main()
{
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int a, b, c, minOp, maxOp;
    cin >> a >> b >> c;
    if (abs(a - b) == abs(b - c) == 1) {
        minOp = 0; maxOp = 0;
    }
    else if (abs(a - b) == 2 || abs(b - c) == 2) {
        minOp = 1;
        maxOp = max(abs(a-b), abs(b-c)) - 1;
    }
    else {
        minOp = 2;
        maxOp = max(abs(a-b), abs(b-c)) - 1;
    }
    cout << minOp << endl << maxOp << endl;
}