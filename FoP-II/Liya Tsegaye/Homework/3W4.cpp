#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int NUM_EMPLOYEES = 10;

struct Employee {
    int id;
    char sex;
    double hourlyWage;
    int years;
};

void sortEmployees(Employee employees[], int n) {
    sort(employees, employees + n, [](Employee a, Employee b) {
        return a.id < b.id;
    });
}

void writeEmployeesToFile(Employee employees[], int n, string fileName) {
    ofstream file(fileName);
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        file << employees[i].id << " " << employees[i].sex << " " << employees[i].hourlyWage << " " << employees[i].years << endl;
    }

    file.close();
}

void readEmployeesFromFile(Employee employees[], int n, string fileName) {
    ifstream file(fileName);
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        file >> employees[i].id >> employees[i].sex >> employees[i].hourlyWage >> employees[i].years;
    }

    file.close();
}

void calculateMonthlyPay(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        double hours;
        cout << "Enter the number of hours worked by employee " << employees[i].id << ": ";
        cin >> hours;

        double pay = hours * employees[i].hourlyWage;
        cout << "Total pay for employee " << employees[i].id << ": $" << pay << endl;
    }
}

void updateEmployees(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the new hourly wage for employee " << employees[i].id << ": ";
        cin >> employees[i].hourlyWage;

        cout << "Enter the new number of years for employee " << employees[i].id << ": ";
        cin >> employees[i].years;
    }
}

int main() {
    Employee employees[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter information for employee " << (i + 1) << endl;

        cout << "ID: ";
        cin >> employees[i].id;

        cout << "Sex (M/F): ";
        cin >> employees[i].sex;

        cout << "Hourly wage: ";
        cin >> employees[i].hourlyWage;

        cout << "Years with the company: ";
        cin >> employees[i].years;

        cout << endl;
    }

    sortEmployees(employees, NUM_EMPLOYEES);
    writeEmployeesToFile(employees, NUM_EMPLOYEES, "employees.txt");

    // (a)
    readEmployeesFromFile(employees, NUM_EMPLOYEES, "employees.txt");
    calculateMonthlyPay(employees, NUM_EMPLOYEES);

    // (b)
    readEmployeesFromFile(employees, NUM_EMPLOYEES, "employees.txt");
    updateEmployees(employees, NUM_EMPLOYEES);
    writeEmployeesToFile(employees, NUM_EMPLOYEES, "updated_employees.txt");

    return 0;
}
