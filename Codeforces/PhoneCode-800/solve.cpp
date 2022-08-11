#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string phones[n];
    int count = 0;
    bool broken = false;

    for (int i = 0; i < n; i++)
    {
        cin >> phones[i];
    }

    for (int b = 0; b < phones[0].length(); b++)
    {
        for (int a = 0; a < n; a++)
        {
            if (a == 0)
            {
                count++;
            }
            else if (phones[a][b] == phones[a - 1][b])
            {
                count++;
            }
            else
            {
                broken = true;
                count -= a;
                break;
            }
        }
        if (broken)
        {
            break;
        }
    }

    cout << count / n;

    return 0;
}