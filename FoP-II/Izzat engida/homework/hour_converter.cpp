#include <iostream>
#include <cctype>
using namespace std;

void input(int &hour, int &minute, char &time);
void conversion(int &hour, char time);
void output(int hour, int minute, char time);

int main() {
    char check, time;
    int hour, minute;
    do {
        input(hour, minute, time);
        conversion(hour, time);
        output(hour, minute, time);
        cout << "Do you want to continue (y/n): ";
        cin >> check;
        check = toupper(check);
    } while (check == 'Y');
    return 0;
}

void input(int &hour, int &minute, char &time) {
    cout << "Enter the hour: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> minute;
    cout << "A for AM, P for PM: ";
    cin >> time;
    time = toupper(time);
}

void conversion(int &hour, char time) {
    if (time == 'A') {
        if (hour == 12) {
            hour = 0;
        }
    } else if (time == 'P') {
        if (hour < 12) {
            hour += 12;
        }
    }
}

void output(int hour, int minute, char time) {
    if (hour == 0) {
        hour = 12;
        time = 'A';
    } else if (hour == 12) {
        time = 'P';
    } else if (hour > 12) {
        hour -= 12;
        time = 'P';
    } else {
        time = 'A';
    }
    cout << "The new time is: " << hour << ":" << minute << " " << time << "M" << endl;
}
