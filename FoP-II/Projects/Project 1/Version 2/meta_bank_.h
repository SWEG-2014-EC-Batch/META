#include <iomanip>
#include <ctype.h>
#include <iostream>
#include <fstream>
using namespace std;
#define specialkey 1234
struct user
{
    int account_number = 0;       // account number
    int pinnumber = 0;            // account PIN
    float amount = 0;             // account balance
    float deposit = 0;            // total amount ever deposited in the account
    float withdraw = 0;           // total amount ever withdrawn from the account
    bool isAccountClosed = false; // is the account closed (true) or open (false)?
};
void menu();                                                                         // menu function that presents available transactions and directs the user to the appropriate function
void openaccount(user[], int);                                                       // function to open a new account
void balanceinquiry(user[]);                                                         // function to make an inquiry on a user account's balance
void deposit(user[]);                                                                // function to deposit cash to a user account
void withdraw(user[]);                                                               // function to withdraw cash from a user account
void closeaccount(user[]);                                                           // function to close a user account
void interest(user[]);                                                               // managerial function to compute interest for each account
void print(user[]);                                                                  // managerial function for printing transaction data in the console AND to a file
void goodbye(user[]);                                                                // managerial function to exit the program AND print all data to a file
void printFile(user[]);                                                              // subordinate funtion of print() and goodbye() that prints bank data to a file
int accountNumberAuthenticator(int &acc);                                            // authentication function that checks whether a user-inputted account number is correct/available
int accountandPINAuthenticator(user[], int &acc, int &pin, int tries = 0);           // authentication function built off of accountNumberAuthenticator that also checks for PIN correctness
int accountAndPinAndClosureAuthenticator(user[], int &acc, int &pin, int tries = 0); // authentication function built off of accountandPINAuthenticator that also checks for account closure
int managerAuthentication();                                                         // managerial authentication function to see if the inputted PIN is the manager's

user info[101]; // array that holds ALL bank information: user account numbers, PINs, balances, and so on

void menu()
{
    char insert; // character used to select transaction type
    while (insert != 'E')
    {
        cout << "\n\n\t*******WELCOME TO BANK OF META*******\n\n";

        cout << "Which transaction type do you want to operate?\n\n";
        cout << "\t1. To open an account enter \"O\" \n"
             << "\t2. To know your remaining balance enter  \"B\" \n"
             << "\t3. To deposit money into an account enter\"D\" \n"
             << "\t4. To withdraw money from an account enter \"W\" \n"
             << "\t5. To close/reopen your account enter\"C\" \n"
             << "\t6. To compute interest enter \"I\" \n"
             << "\t7. To print all accounts and some transaction data enter \"P\" \n"
             << "\t8. To close all accounts, print data to file, and exit the system enter \"E\" \n";
        cout << "\n \t Menu command: ";
        cin >> insert;
        insert = toupper(insert);
        cout << fixed << setprecision(2);
        if (insert == 'O')
        {
            openaccount(info, 100);
        }
        else if (insert == 'B')
        {
            balanceinquiry(info);
        }
        else if (insert == 'D')
        {
            deposit(info);
        }
        else if (insert == 'W')
        {
            withdraw(info);
        }
        else if (insert == 'C')
        {
            closeaccount(info);
        }
        else if (insert == 'I')
        {
            interest(info);
        }
        else if (insert == 'P')
        {
            print(info);
        }
        else if (insert == 'E')
        {
            goodbye(info);
            break;
        }
        else
        {
        cout << "Invalid command";
        }

        cout << "\n\n\nEnter any key to continue: ";
        cin >> insert;
    }
}

void openaccount(user info[], int size)
{
    int acc;
    cout << "Which account number do you want from the range (1001-1101)? The following are available: \n\n"
         << endl;

    for (int row = 0; row < 11; row++) // code to print available account numbers (necessary since it's the user and not the program that picks them)
    {
        for (int col = 0; col < 10; col++)
        {
            if (info[10 * row + col + 1].account_number != 0 && ((10 * row) + col) <= 100)
            {
                cout << "     ";
            }
            else if (info[10 * row + col + 1].account_number == 0 && ((10 * row) + col) <= 100)
            {
                cout << 1001 + ((10 * row) + col) << " ";
            }
            if (col == 9)
                cout << endl;
        }
    }

    cout << "\n\nInput choice: ";
    cin >> acc;

    while (acc < 1001 || acc > 1101)
    {
        cout << "Out of range. Please try again correctly." << endl;
        cin >> acc;
    }
    size = acc - 1000;
    if (info[size].account_number == 0)
    {
        cout << "Enter initial deposit: ";
        cin >> info[size].amount;
        while (info[size].amount < 25)
        {
            cout << "Initial deposit should be 25 and above. Please try again." << endl;
            cin >> info[size].amount;
        }
        cout << "Enter your new PIN: ";
        cin >> info[size].pinnumber;
        while (info[size].pinnumber < 1000 || info[size].pinnumber > 9999)
        {
            cout << "Invalid PIN. Please enter a four-digit number." << endl;
            cin >> info[size].pinnumber;
        }
        info[size].account_number = acc;
        cout << "Account number -" << info[size].account_number << "- has been opened." << endl;
    }
    else
    {
        cout << "Account in use. Please retry and select a new account." << endl;
    }
}

void balanceinquiry(user info[])
{
    int acc = 0, pin = 0;
    if (accountandPINAuthenticator(info, acc, pin) == 1)
    {
        cout << "Your balance is: " << info[acc - 1000].amount << endl;
    }
}

void deposit(user info[])
{
    int acc = 0, pin = 0;
    float new_deposit = 0;
    if (accountAndPinAndClosureAuthenticator(info, acc, pin) == 1)
    {
        cout << "Enter the amount you want to deposit: ";
        cin >> new_deposit;
        while (new_deposit < 0)
        {
            cout << "Negative amount not supported. Please retry: " << endl;
            cin >> new_deposit;
        }
