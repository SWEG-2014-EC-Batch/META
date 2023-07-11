#include <iostream>
#include <fstream>
using namespace std;

struct bankInfo
{
    string firstName, lastName;
    int account;
    float balance;
};

void output(bankInfo input[]);
int main()
{
    int acc;
    bankInfo Users[5] = {
        {"Jack", "P.", 1000, 5000},
        {"Alice", "Le.", 1005, 10000},
        {"Brian", "A.", 1003, 966},
        {"Elsa", "W.", 1044, 9000}};

        bankInfo Users2[5];

    fstream fout("customers.txt", ios::out);
    for (int i = 0; i <= 4; i++)
    {
        fout << Users[i].account << "\t"<<Users[i].firstName<<"\t"
             << Users[i].balance << "\n";
    }
    fout.close();

    output(Users2);
    cout << "Enter accout number: ";
    cin >> acc;
    for (int i = 0; i <= 4; i++)
    {
        if (Users2[i].account == acc)
        {
            cout << Users2[i].account <<"\t"<<Users2[i].firstName<< "\t" << Users2[i].balance << "\n";
        }
        
    }
}

void output(bankInfo input[])
{
    ifstream fio("customers.txt", ios::in);
     if (!fio) {
        cout << "Error opening file\n";
        return;
    }
    for (int i = 0; i <= 4; i++)
    {
        fio >> input[i].account >>input[i].firstName>>input[i].balance;
    }

}