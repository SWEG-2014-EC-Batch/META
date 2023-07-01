#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::setw;
using std::string;

struct phone
{
    string areaCode;
    string exchange;
    string number;
};

struct person
{
    string name;
    phone phoneNumber;
};

int main()
{
    const int PERSON_NUMBER = 2;
    person persons[PERSON_NUMBER];
    cout << setw(80) << "\nWelcome to the DECAD phone number registry! You will be asked to input the names and numbers of " << PERSON_NUMBER << " people.\n\n";
    for (int i = 0; i < PERSON_NUMBER; i++)
    {
        cout << "\n\nInput name of person " << i + 1 << ": ";
        if (i > 0) cin.ignore();
        getline(cin, persons[i].name);
        cout << "\nInput area code part of this person's phone number: ";
        cin >> persons[i].phoneNumber.areaCode;
        cout << "\nInput exchange code part of this person's phone number: ";
        cin >> persons[i].phoneNumber.exchange;
        cout << "\nInput the actual number part of this person's phone number: ";
        cin >> persons[i].phoneNumber.number;
    }
    for (int i = 0; i < PERSON_NUMBER; i++)
    {
        if (i == 0)
            cout << "\n"
                 << setw(30) << "Name" << setw(30) << "Phone Number";
        cout << "\n"
             << setw(30) << persons[i].name << setw(30) << "(" << persons[i].phoneNumber.areaCode << ") " << persons[i].phoneNumber.exchange << "-" << persons[i].phoneNumber.number;
    }
}
