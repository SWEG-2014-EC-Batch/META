#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Employee {
    string name;
    double payRate;
    double hours;
    double regularPay;
    double overtimePay;
    double grossPay;
};

void computePay(Employee& e) {
    if (e.hours <= 40) {
        e.regularPay = e.hours * e.payRate;
        e.overtimePay = 0;
    } else {
        e.regularPay = 40 * e.payRate;
        e.overtimePay = (e.hours - 40) * 1.5 * e.payRate;
    }
    e.grossPay = e.regularPay + e.overtimePay;
}

int main() {
    ifstream file("data2.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return -1;
    }

    cout << left << setw(10) << "Name" << setw(10) << "Pay Rate" << setw(10) << "Hours" << setw(15) << "Regular Pay" << setw(15) << "Overtime Pay" << setw(15) << "Gross Pay" << endl;

    double totalRegularPay = 0, totalOvertimePay = 0, totalGrossPay = 0;

    Employee e;
    while (file >> e.name >> e.payRate >> e.hours) {
        computePay(e);
        totalRegularPay += e.regularPay;
        totalOvertimePay += e.overtimePay;
        totalGrossPay += e.grossPay;

        cout << left << setw(10) << e.name << setw(10) << e.payRate << setw(10) << e.hours << setw(15) << fixed << setprecision(2) << e.regularPay << setw(15) << fixed << setprecision(2) << e.overtimePay << setw(15) << fixed << setprecision(2) << e.grossPay << endl;
    }

    cout << endl;
    cout << left << setw(30) << "Totals" << setw(15) << fixed << setprecision(2) << totalRegularPay<< setw(15) << fixed<< setprecision(2)<< totalOvertimePay<< setw(15)<< fixed<< setprecision(2)<< totalGrossPay<< endl;

    file.close();
    return 0;
}
