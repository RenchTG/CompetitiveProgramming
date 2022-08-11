#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int x;
        cin >> x;
        string num;
        bool changed;
        num = to_string(x);
        for (int i = num.length() - 1; i > 0; i--)
        {
            if (int(num[i]) + int(num[i-1]) > 10)
            {
                num[i] = (int(num[i]) + int(num[i-1])) - 10;
                num[i-1] = 1;
                changed = true;
            }
        }
        if (!changed)
        {
            
        }
    }
}