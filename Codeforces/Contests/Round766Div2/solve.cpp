#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int n, m, r, c, output;
        cin >> n >> m >> r >> c;
        bool oneBlack = false;
        bool solved = false;
        string rowStr[n];
        for (int ind2 = 0; ind2 < n; ind2++)
        {
            cin >> rowStr[ind2];
        }
        if (rowStr[r-1][c-1] == 'B')
        {
            output = 0;
            solved = true;
        }
        for (int row = 0; row < n; row++)
        {
            for (int column = 0; column < m; column++)
            {
                if (!solved && rowStr[row][column] == 'B' && column == c - 1 && row != r - 1)
                {
                    output = 1;
                    solved = true;
                }
                if (!solved && rowStr[row][column] == 'B' && row == r - 1 && column != c - 1)
                {
                    output = 1;
                    solved = true;
                }
                if (!oneBlack && rowStr[row][column] == 'B')
                {
                    oneBlack = true;
                }
            }
        }
        if (!solved && !oneBlack)
        {
            output = -1;
        }
        else if (!solved && oneBlack)
        {
            output = 2;
        }
        cout << output << endl;
    }
}