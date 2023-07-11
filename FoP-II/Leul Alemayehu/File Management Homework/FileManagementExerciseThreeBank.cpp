#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int ACCOUNT_COUNT = 5;

struct account
{
    int accountNumber;
    string firstName;
    string lastName;
    double balance;
} ieistAccounts[ACCOUNT_COUNT];

int main()
{
    ifstream bankRead("ExQ3Bank.txt");
    if(bankRead.is_open())
    {
        int requiredAccount;
        cout << "\nWhich bank account number's data should be retrieved (1000 to 1004 only): ";
        cin >> requiredAccount;
        for(int i = 0 ; i < ACCOUNT_COUNT ; i++)
        {
            bankRead >> ieistAccounts[i].accountNumber >> ieistAccounts[i].firstName >> ieistAccounts[i].lastName >> ieistAccounts[i].balance;
            if(ieistAccounts[i].accountNumber == requiredAccount)
            {
                cout << ieistAccounts[i].firstName << " " << ieistAccounts[i].lastName << " has an account balance of " << ieistAccounts[i].balance;
            }
        }
        bankRead.close();
    }
}
