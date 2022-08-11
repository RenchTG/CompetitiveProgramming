#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int diffAB = abs(a - b);
        int diffAC = abs(a - c);
        int diffBC = abs(b - c);
        int target;
        bool done = false;

        if (a == b && b == c && !done) {cout << "YES" << endl; done = true;}
        if (abs(a-b) == abs(b-c) && !done) {cout << "YES" << endl; done = true;}
        if (a < b && a < c && !done)
        {
            target = b - diffBC;
            if (target % a == 0 && target != 0 && target >= a && ((target + b + c) / 3 == b))
            {
                cout << "YES" << endl;
                done = true;
            }
        }
        if (((b <= a && b < c) || (b < a && b <= c)) && !done)
        {
            target = (diffAC / 2) + a;
            if (target % b == 0 && target != 0 && target >= b && ((a + target + c) / 3 == target))
            {
                cout << "YES" << endl;
                done = true;
            }
        }
        if (c < a && c < b && !done)
        {
            target = diffAB + b;
            if (target % c == 0 && target != 0 && target >= c && ((a + b + target) / 3 == b))
            {
                cout << "YES" << endl;
                done = true;
            }
        }
        if (!done)
        {
            cout << "NO" << endl;
        }
    }
}