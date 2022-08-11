#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int a, b;
        cin >> a >> b;
        int operations = 0;
        while (a != b)
        {
            if (b - a > abs(b - (a | b)))
            {
                a = (a | b);
                operations++;
            }
            else
            {
                int distIfAIncrements = abs(b - ((a+1) | b));
                int distIfBIncrements = abs((b+1) - (a | (b+1)));
                distIfAIncrements = min(distIfAIncrements, abs(b-a+1));
                distIfBIncrements = min(distIfBIncrements, abs(b+1-a));
                int minDist = min(distIfAIncrements, distIfBIncrements);
                if (minDist == distIfAIncrements)
                {
                    a++;
                    operations++;
                }
                else if (minDist == distIfBIncrements)
                {
                    b++;
                    operations++;
                }
            }
            cout << "A IS " << a << " B IS " << b << endl;
        }
        cout << operations << endl;
    }
}