#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int WORKER_COUNT = 3;
string filename = "ExQ4Company.txt";

struct worker
{
    string id;
    char sex;
    float wage;
    float pay;
    int yearsEmployed;
    int position = 0;
} employees[WORKER_COUNT], employeesArranged[WORKER_COUNT], employeesRead[WORKER_COUNT], employeesAltered[WORKER_COUNT];

void positioner();

void ascendingAssigner();

void payCalcAndPrint();

void yearOrWageChange();

int main()
{
    char selection;
    ofstream compO(filename);
    if (compO.is_open())
    {
        cout << "\nWelcome to your company's employee data management system! Please enter some employee data before continuing.\n\n";
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            cout << "\nInput ID number of worker " << i + 1 << ": ";
            cin >> employees[i].id;
            cout << "\nInput sex of worker " << i + 1 << " (M/F): ";
            cin >> employees[i].sex;
            cout << "\nInput hourly wage of worker " << i + 1 << ": ";
            cin >> employees[i].wage;
            cout << "\nInput number of years of worker " << i + 1 << " with the company: ";
            cin >> employees[i].yearsEmployed;
        }
        positioner();
        ascendingAssigner();
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            compO << employeesArranged[i].id << " " << employeesArranged[i].sex << " "
                  << employeesArranged[i].wage << " " << employeesArranged[i].yearsEmployed << endl;
        }
        cout << "\n\nEmployee data input complete.";
        do
        {
            cout << "\nDo you wish to simply exit (E), calculate total pay for each employee (P), or update wages and years worked (U): ";
            cin >> selection;
            if (selection == 'P' || selection == 'p')
                payCalcAndPrint();
            else if (selection == 'U' || selection == 'u')
                yearOrWageChange();
            else
            {
                cout << "\nInvalid input. Start over.";
            }
        } while(selection != 'E');
    }
}

void positioner()
{
    for (int i = 0; i < WORKER_COUNT; i++)
    {
        for (int j = 0; j < WORKER_COUNT; j++)
        {
            if (stoi(employees[i].id) > stoi(employees[j].id))
                employees[i].position++;
        }
    }
}

void ascendingAssigner()
{
    for (int i = 0; i < WORKER_COUNT; i++)
    {
        for (int j = 0; j < WORKER_COUNT; j++)
        {
            if (i == employees[j].position)
                employeesArranged[i] = employees[j];
        }
    }
}

void payCalcAndPrint()
{
    int hours = 0;
    ifstream payObj(filename);
    if (payObj.is_open())
    {
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            hours = 0;
            payObj >> employeesRead[i].id >> employeesRead[i].sex >> employeesRead[i].wage >> employeesRead[i].yearsEmployed;
            cout << "\nHow many hours did the worker with ID number " << employeesRead[i].id << " work? ";
            cin >> hours;
            employeesRead[i].pay = employeesRead[i].wage * hours;
        }
        cout << endl
             << setw(15) << "Worker ID" << setw(15) << "Pay\n";
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            cout << endl
                 << setw(15) << employeesRead[i].id << setw(15) << employeesRead[i].pay;
        }
    }
}

void yearOrWageChange()
{
    char choice = ' ';
    float numchoice = 0;
    ifstream changeObj(filename);
    ofstream changePrintObj(filename + "Updated.txt");
    if (changeObj.is_open() && changePrintObj.is_open())
    {
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            changeObj >> employeesAltered[i].id >> employeesAltered[i].sex >> employeesAltered[i].wage >> employeesAltered[i].yearsEmployed;
        }
    cStart:
        cout << "\nDo you wish to change hourly wage (H) or years worked (Y) for each employee?";
        cin >> choice;
        if (choice == 'h' || choice == 'H')
        {
            cout << "\nYou have chosen to change employees' hourly wages.\n";
            for (int i = 0; i < WORKER_COUNT; i++)
            {
                cout << "\nInput the new hourly wage of the employee with ID number " << employeesAltered[i].id
                     << ". If no change here is desired, simply input the current wage: ";
                cin >> numchoice;
                employeesAltered[i].wage = numchoice;
            }
        }
        else if (choice == 'y' || choice == 'Y')
        {
            cout << "\nYou have chosen to change employees' numbers of years employed.\n";
            for (int i = 0; i < WORKER_COUNT; i++)
            {
                cout << "\nInput the new number of years of service of the employee with ID number " << employeesAltered[i].id
                     << ". If no change here is desired, input the current wage instead: ";
                cin >> numchoice;
                employeesAltered[i].yearsEmployed = numchoice;
            }
        }
        else
        {
            cout << "\nInvalid input. Start over.";
            goto cStart;
        }
        for (int i = 0; i < WORKER_COUNT; i++)
        {
            changePrintObj << employeesAltered[i].id << " " << employeesAltered[i].sex << " "
                           << employeesAltered[i].wage << " " << employeesAltered[i].yearsEmployed << endl;
        }
    }
}