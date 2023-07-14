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
