#include <iostream>
using namespace std;

int main()
{
    long long arr[7];
    long long a, b, c, lowest, secLowest, highest;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    lowest = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    a = lowest;
    secLowest = 1000000000;
    bool lowestSeen = false;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == lowest && lowestSeen == false)
        {
            lowestSeen = true;
        }
        else if (arr[i] < secLowest)
        {
            secLowest = arr[i];
        }
    }
    b = secLowest;
    highest = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    c = highest - a - b;
    cout << a << " " << b << " " << c << endl;
}   