#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alph, word;
    cin >> alph >> word;
    string song = alph;
    int count = 1, spot = 0;
    for (int i = 0; i < int(song.length()); i++) {
        if (song[i] == word[spot]) spot++;
        if (i == int(song.length()-1) && spot <= int(word.length()-1)) {
            song += alph;
            count++;
        }
        if (spot == int(word.length())) break;
    }
    cout << count << endl;
}