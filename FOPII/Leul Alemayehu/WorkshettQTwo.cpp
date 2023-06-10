#include <iostream>
using namespace std;

int isLeapYear(int year);

int main()
{
    int yearChecked;
    cout << "Please input year whose \"leapness\" to check: \n";
    cin >> yearChecked;

    if (isLeapYear(yearChecked)) cout << yearChecked << " is a leap year.";

    else cout << yearChecked << " is not a leap year.";
}

int isLeapYear(int year)
{

    if (year % 400 == 0)
        return 1;

    if (year % 100 == 0 || year % 4 != 0)
        return 0;

    if (year % 4 == 0)
        return 1;
}