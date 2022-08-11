#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    char leadingTeam = input[0];
    int count = 0;
    bool danger = false;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == leadingTeam)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        leadingTeam = input[i];

        if (count >= 7)
        {
            cout << "YES";
            danger = true;
            break;
        }
    }

    if (!danger)
    {
        cout << "NO";
    }

    return 0;
}