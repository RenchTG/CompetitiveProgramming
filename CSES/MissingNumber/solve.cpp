#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    for (int ind = 0; ind < n - 1; ind++)
    {
        cin >> a[ind];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i];
    }
    long long consSum = (n / 2.0) * (1 + n);
    cout << consSum - sum;
}   