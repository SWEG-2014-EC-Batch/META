#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 20;

struct Student {
    string name;
    double exam1;
    double exam2;
    double homework;
    double finalExam;
    double finalGrade;
    char letterGrade;
};

double calculateFinalGrade(Student s) {
    return 0.20 * s.exam1 + 0.20 * s.exam2 + 0.35 * s.homework + 0.25 * s.finalExam;
}

char assignLetterGrade(double grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 80) {
        return 'B';
    } else if (grade >= 70) {
        return 'C';
    } else if (grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

void writeStudentsToFile(Student students[], int n, string fileName) {
    ofstream file(fileName);
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        file << students[i].name << " " << students[i].exam1 << " " << students[i].exam2 << " " << students[i].homework << " " << students[i].finalExam << " " << students[i].finalGrade << " " << students[i].letterGrade << endl;
    }

    file.close();
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter information for student " << (i + 1) << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Exam 1: ";
        cin >> students[i].exam1;

        cout << "Exam 2: ";
        cin >> students[i].exam2;

        cout << "Homework: ";
        cin >> students[i].homework;

        cout << "Final Exam: ";
        cin >> students[i].finalExam;

        students[i].finalGrade = calculateFinalGrade(students[i]);
        students[i].letterGrade = assignLetterGrade(students[i].finalGrade);

        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].name << endl;
        cout << "Exam 1: " << students[i].exam1 << endl;
        cout << "Exam 2: " << students[i].exam2<< endl;
        cout<< "Homework: "<<students[i].homework<<endl;
        cout<<"Final Exam: "<<students[i].finalExam<<endl;
        cout<<"Final Grade: "<<students[i].finalGrade<<endl;
        cout<<"Letter Grade: "<<students[i].letterGrade<<endl;
        cout<<endl;
    }

    writeStudentsToFile(students, numStudents, "grades.txt");

    return 0;
}
