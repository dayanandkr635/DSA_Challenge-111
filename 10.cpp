#include <iostream>
using namespace std;    
int main() {
    int day, month, year;
    cin >> day >> month >> year;

    bool isValid = true;

    if (month < 1 || month > 12) {
        isValid = false;
    } else {
        if (month == 2) { // February
            // Check for leap year
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (isLeapYear) {
                if (day < 1 || day > 29) {
                    isValid = false;
                }
            } else {
                if (day < 1 || day > 28) {
                    isValid = false;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) { // April, June, September, November
            if (day < 1 || day > 30) {
                isValid = false;
            }
        } else { // January, March, May, July, August, October, December
            if (day < 1 || day > 31) {
                isValid = false;
            }
        }
    }

    if (isValid) {
        cout << "VALID DATE" << endl;
    } else {
        cout << "INVALID DATE" << endl;
    }

    return 0;
}
