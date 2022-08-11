#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n, j != i; j++)
            {
                cout << i << " XOR " << j << " EQUALS " << (i ^ j) << endl;
            }
        }
    }
}