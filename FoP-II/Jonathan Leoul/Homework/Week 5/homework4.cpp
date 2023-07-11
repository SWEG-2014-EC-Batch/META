#include <iostream>
#include <fstream>
using namespace std;

struct smallComp {
    int id;char sex; float hourlyWage;int years;
}Collection[10],Empty[10],Empty2[10];

void process(smallComp input[]);
void pay(smallComp input[]);
void update(smallComp input[]);

int main () {
process(Collection);
pay(Empty);
update(Empty2);
}
void process(smallComp input[])
{
    fstream fout("SmallCompanym.txt", ios::out);
    for (int i = 0; i <= 10; i++) {
        cout << "Person " << (i + 1) << endl;
        cout << "Enter ID: ";
        cin >> input[i].id;
        cout << "Enter sex(M/F): ";
        cin >> input[i].sex;
        cout << "Enter Hourly Wage: ";
        cin >> input[i].hourlyWage;
        cout << "Enter Years spent with the company: ";
        cin >> input[i].years;
        fout << input[i].id << " " << input[i].sex << " "
             << input[i].hourlyWage << " " << input[i].years << endl;
    }
    cout << "Program completed\n";
}

void pay(smallComp input[])
{
    ifstream fio("SmallCompanym.txt", ios::in);
    if (!fio) {
        cout << "Error opening file\n";
        return;
    }

    int i = 0;
    while (fio >> input[i].id >> input[i].sex
               >> input[i].hourlyWage >> input[i].years) {
        i++;
    }

    int hours;
    for (int j = 0; j < i; j++) {
        cout << "Employee " << (j + 1) << endl;
        cout << "Insert time worked for ID " << input[j].id << ": ";
        cin >> hours;
        cout << "Monthly payment = "
             << (input[j].hourlyWage * hours) << endl;
    }
    fio.close();
    cout << "Payment compelete\n";
}

void update(smallComp input[])
{
    ifstream fin("SmallCompanym.txt", ios::in);
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    int i = 0;
    while (fin >> input[i].id >> input[i].sex
               >> input[i].hourlyWage >> input[i].years) {
        i++;
    }
    fin.close();

    ofstream fout("SmallCompany2.txt", ios::out);
    for (int j = 0; j < i; j++) {
        cout << "Enter new weekly wage for ID " << input[j].id;
        cin >> input[j].hourlyWage;
        cout << "Enter new years worked at the company for the same ID: ";
        cin >> input[j].years;
        fout << input[j].id << " " 
             << input[j].sex << " "
             << input[j].hourlyWage << " "
             << input[j].years<< endl;
    }
}
