#include <iostream>
using namespace std;

int main()
{
	freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((c >= a && c <= b) && (d >= a && d <= b))
    {
        cout << b - a;
    }
    else if ((a >= c && a <= d) && (b >= c && b <= d))
    {
        cout << d - c;
    }
    else if (c >= a && c <= b)
    {
        cout << d - a;
    }    
    else if (d >= a && d <= b)
    {
        cout << b - c;
    }
    else
    {
        cout << (b - a) + (d - c);
    }
}   