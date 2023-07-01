#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;
using std::setw;

struct student
{
    string name;
    string id;
    float testMark;
    float finalMark;
};

int main()
{
    int studentTotal = 0;
    struct student studentOne[100];
    cout << "How many students' data do you want handled: ";
    cin >> studentTotal;
    for (int i = 0; i < studentTotal; i++)
    {
        cout << "\nInput name of student: ";
        cin.ignore();
        getline(cin, studentOne[i].name);
        cout << "\nInput ID of student: ";
        getline(cin, studentOne[i].id);
        cout << "\nInput test mark of student: ";
        cin >> studentOne[i].testMark;
        cout << "\nInput final exam grade of student: ";
        cin.ignore();
        cin >> studentOne[i].finalMark;
    }
    for (int i = 0 ; i < studentTotal ; i++)
    {
        if (i == 0) cout << "\n" << setw(30) << "Name" <<  setw(30) << "ID" << setw(30) << "Test Mark" << setw(30) << "Final Exam";
        cout << "\n" << setw(30) << studentOne[i].name <<  setw(30) << studentOne[i].id << setw(30) << studentOne[i].testMark << setw(30) << studentOne[i].finalMark;
    }
}
