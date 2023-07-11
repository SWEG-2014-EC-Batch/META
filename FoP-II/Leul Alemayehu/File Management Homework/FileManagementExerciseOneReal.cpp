// Exercise for reading information from a file
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const int WORKER_COUNT = 4;

struct employee
{
    string name;
    float payrate;
    float hours;
    float regularPay = 0;
    float overtimePay = 0;
    float grossPay = 0;
};

void payCalculator(employee workers[]);

void payPrinter(employee workers[]);

int main()
{
    string outputstring;
    employee workers[WORKER_COUNT];
    ifstream employeeReader("employees.txt");
    if (employeeReader.is_open())
    {
        employeeReader.seekg(ios::beg);
        int i = 0, j = 0;
        while (getline(employeeReader, outputstring))
        {
            if (j % 3 == 0)
                workers[i].name = outputstring;
            if (j % 3 == 1)
                workers[i].payrate = stof(outputstring);
            if (j % 3 == 2)
            {
                workers[i].hours = stof(outputstring);
                i++;
            }
            j++;
        }
    }
    employeeReader.close();
    payCalculator(workers);
    payPrinter(workers);
}

void payCalculator(employee workers[])
{
    for (int i = 0; i < WORKER_COUNT; i++)
    {
        if (workers[i].hours > 40)
        {
            workers[i].regularPay = 40 * workers[i].payrate;
            workers[i].overtimePay = (workers[i].hours - 40) * 1.5 * workers[i].payrate;
        }
        else
        {
            workers[i].regularPay = workers[i].hours * workers[i].payrate;
            workers[i].overtimePay = 0;
        }
        workers[i].grossPay = workers[i].regularPay + workers[i].overtimePay;
    }
}

void payPrinter(employee workers[])
{
    float totalRegular = 0;
    float totalOvertime = 0;
    float totalGross = 0;
    cout << setw(20) << "Name" << setw(20) << "Payrate" << setw(20) << "Hours" << setw(20) 
        << "Regular Pay" << setw(20) << "Overtime Pay" << setw(20) << "Gross Pay" << endl << endl;
    for (int i = 0; i < WORKER_COUNT; i++)
    {
        totalRegular += workers[i].regularPay;
        totalOvertime += workers[i].overtimePay;
        totalGross += workers[i].grossPay;
        cout << setw(20) << workers[i].name << setw(20) << workers[i].payrate << setw(20) << workers[i].hours << setw(20) 
        << workers[i].regularPay << setw(20) << workers[i].overtimePay << setw(20) << workers[i].grossPay << endl;
    }
    cout << "\n" << "Total" << setw(75) << totalRegular << setw(20) << totalOvertime << setw(20) << totalGross;
}