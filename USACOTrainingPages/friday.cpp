/*
ID: dobrano1
LANG: C++
PROG: friday
*/

#include <iostream>
using namespace std;

int main() 
{
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);

    int n; 
    cin >> n;

    int monday = 0, tuesday = 0, wednesday = 0, thursday = 0, friday = 0, saturday = 0, sunday = 0;

    for (int day = 1, month = 1, year = 1900, dayOfWeek = 1; year <= 1900 + n-1; day++, dayOfWeek++) {
        if (day == 13) {
            switch(dayOfWeek) {
                case 1: monday++; break;
                case 2: tuesday++; break;
                case 3: wednesday++; break;
                case 4: thursday++; break;
                case 5: friday++; break;
                case 6: saturday++; break;
                case 7: sunday++; break;
            }
        }
        if (month == 2) {
            if (day == 28 && year % 4 != 0) {
                month++;
                day = 0;
            }
            else if (day == 28 && year % 100 == 0 && year % 400 != 0) {
                month++;
                day = 0;
            }
            else if (day == 29 && year % 4 == 0) {
                month++;
                day = 0;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day == 30) {
                month++;
                day = 0;
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) {
            if (day == 31) {
                month++;
                day = 0;
            }
        }
        if (dayOfWeek == 7) { dayOfWeek = 0; }
        if (month == 12 && day == 31) { year++; month = 1; day = 0; }
    }

    cout << saturday << " " << sunday << " " << monday << " " << tuesday << " " << wednesday << " " << thursday << " " << friday << endl;

    return 0;
}