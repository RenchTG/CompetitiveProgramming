#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int highestCount = 0;
    char leading = s[0];
    for(int i = 0; i < s.length(); i++)
    {
        if (leading != s[i])
        {
            if (count > highestCount)
            {
                highestCount = count;
            }
            count = 1;
            leading = s[i];
        }
        else 
        {
            count++;
        }
    }
    if (count > highestCount)
    {
        highestCount = count;
    }
    cout << highestCount;
}   