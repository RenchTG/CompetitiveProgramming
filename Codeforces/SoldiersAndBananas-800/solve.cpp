#include <iostream>
using namespace std;

int main()
{
    long long n, k, w, cost;
    cin >> k >> n >> w;
    cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }
    cost -= n;
    if (cost < 0)
    {
        cout << 0;
    }
    else
    {
        cout << cost;
    }
}   