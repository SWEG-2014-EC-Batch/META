#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

struct Employee {
    int id;
    char sex;
    double hourly_wage;
    int years;
};

void input(Employee* employees, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter ID number: ";
        cin >> employees[i].id;
        cout << "Enter sex (M/F): ";
        cin >> employees[i].sex;
        cout << "Enter hourly wage: ";
        cin >> employees[i].hourly_wage;
        cout << "Enter years with the company: ";
        cin >> employees[i].years;
    }
}

void sort_employees(Employee* employees, int size) {
    sort(employees, employees + size, [](const Employee& a, const Employee& b) {
        return a.id < b.id;
    });
}

void write_to_file(const Employee* employees, int size) {
    ofstream file("employees.txt");
    if (!file) {
        cerr << "Error creating file\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        file << employees[i].id << ' ' << employees[i].sex << ' '
             << employees[i].hourly_wage << ' ' << employees[i].years << '\n';
    }
    file.close();
}

void read_file(Employee* employees, int size) {
    ifstream file("employees.txt");
    if (!file) {
        cerr << "Error opening file\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        file >> employees[i].id >> employees[i].sex
             >> employees[i].hourly_wage >> employees[i].years;
    }
    file.close();
}

void calculate_pay(const Employee* employees, int size) {
    for (int i = 0; i < size; i++) {
        int hours;
        cout << "Enter hours worked for employee " << employees[i].id << ": ";
        cin >> hours;
        double pay = hours * employees[i].hourly_wage;
        cout << "Total pay: " << pay << '\n';
    }
}

void update_employees(Employee* employees, int size) {
    for (int i = 0; i < size; i++) {
        char choice;
        cout << "Update hourly wage or years for employee " << employees[i].id
                  << "? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            cout << "Enter new hourly wage: ";
            cin >> employees[i].hourly_wage;
            cout << "Enter new years with the company: ";
            cin >> employees[i].years;
        }
    }
}
void output(const Employee* employees, int size) {
    cout << "ID\tSex\tHourly Wage\tYears with the company\n";
    for (int i = 0; i < size; i++) {
        cout << employees[i].id << '\t' << employees[i].sex << '\t'
             << employees[i].hourly_wage << '\t' << employees[i].years << '\n';
    }
}


int main() {
    const int NUM_EMPLOYEES = 10;
    Employee employees[NUM_EMPLOYEES];
    input(employees, NUM_EMPLOYEES);
    sort_employees(employees, NUM_EMPLOYEES);
    write_to_file(employees, NUM_EMPLOYEES);
    
    read_file(employees, NUM_EMPLOYEES);
    calculate_pay(employees, NUM_EMPLOYEES);
    
    update_employees(employees, NUM_EMPLOYEES);
    write_to_file(employees, NUM_EMPLOYEES);
    output(employees,NUM_EMPLOYEES);
}
