#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int STUDENT_COUNT = 20;
string filename = "ExQ6StudentGrades.txt";

struct student
{
    string name;
    float examOne = 0;
    float examTwo = 0;
    float homework = 0;
    float finalExam = 0;
    float grade = 0;
    char letterGrade = 0;
} examinees[STUDENT_COUNT];

void gradeCalc(int studentsManaged)
{
    for (int i = 0; i < studentsManaged; i++)
    {
        examinees[i].grade = (0.2 * examinees[i].examOne) + (0.2 * examinees[i].examTwo) + (0.35 * examinees[i].homework) + (0.25 * examinees[i].finalExam);
        if (examinees[i].grade > 100 || examinees[i].grade < 0)
            examinees[i].letterGrade = 'N';
        else if (examinees[i].grade >= 90)
            examinees[i].letterGrade = 'A';
        else if (examinees[i].grade >= 80)
            examinees[i].letterGrade = 'B';
        else if (examinees[i].grade >= 70)
            examinees[i].letterGrade = 'C';
        else if (examinees[i].grade >= 60)
            examinees[i].letterGrade = 'D';
        else
            examinees[i].letterGrade = 'F';
    }
}

void gradePrint(int studentsManaged)
{
    ofstream gradePrint(filename);
    if (gradePrint.is_open())
    {
        cout << "Data processing complete.\n";
        cout << setw(25) << "Name" << setw(10) << "Exam 1" << setw(10) << "Exam 2" << setw(10) << "Homework"
             << setw(15) << "Final Exam" << setw(15) << "Grade (No.)" << setw(15) << "Grade(Letter)" << endl << endl;
        gradePrint << setw(25) << "Name" << setw(10) << "Exam 1" << setw(10) << "Exam 2" << setw(10) << "Homework"
                   << setw(15) << "Final Exam" << setw(15) << "Grade (No.)" << setw(15) << "Grade(Letter)" << endl << endl;
        for (int i = 0; i < studentsManaged; i++)
        {
            cout << setw(25) << examinees[i].name << setw(10) << examinees[i].examOne << setw(10) << examinees[i].examTwo << setw(10) << examinees[i].homework
                 << setw(15) << examinees[i].finalExam << setw(15) << examinees[i].grade << setw(15) << examinees[i].letterGrade << endl;
            gradePrint << setw(25) << examinees[i].name << setw(10) << examinees[i].examOne << setw(10) << examinees[i].examTwo << setw(10) << examinees[i].homework
                       << setw(15) << examinees[i].finalExam << setw(15) << examinees[i].grade << setw(15) << examinees[i].letterGrade << endl;
        }
    }
    else cerr << "Error: Error encountered in file opening.";
}

int main()
{
    int mainStudentsManaged = 0;
    cout << "\nWelcome to the Student Grade Management Application!"
         << "\nPlease enter the number of students (20 or fewer) whose data you wish to manage: ";
    cin >> mainStudentsManaged;
    cout << "\nYou will now be asked to enter some information for each student.\n";
    for(int i = 0 ; i < mainStudentsManaged ; i++)
    {
        cout << "\nEnter the name of student " << i + 1 << ", using hyphens in place of spaces between first and last names: ";
        cin >> examinees[i].name;
        cout << "\nEnter the first exam grade of student " << i + 1 << ": ";
        cin >> examinees[i].examOne;
        cout << "\nEnter the second exam grade of student " << i + 1 << ": ";
        cin >> examinees[i].examTwo;
        cout << "\nEnter the homework grade of student " << i + 1 << ": ";
        cin >> examinees[i].homework;
        cout << "\nEnter the final exam grade of student " << i + 1 << ": ";
        cin >> examinees[i].finalExam;
    }
    cout << "\n\nData entry complete.\n\n";
    gradeCalc(mainStudentsManaged);
    gradePrint(mainStudentsManaged);
}