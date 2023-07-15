#include <iomanip>
#include <ctype.h>
#include <iostream>
#include <fstream>
using namespace std;
#define specialkey 1234

void menu();                                                                             // menu function that presents available transactions and directs the user to the appropriate function
void openaccount(float[][6], int);                                                       // function to open a new account
void balanceinquiry(float[][6]);                                                         // function to make an inquiry on a user account's balance
void deposit(float[][6]);                                                                // function to deposit cash to a user account
void withdraw(float[][6]);                                                               // function to withdraw cash from a user account
void closeaccount(float[][6]);                                                           // function to close a user account
void interest(float[][6]);                                                               // managerial function to compute interest for each account
void managerPrint(float accounts[][6]);                                                  // managerial function for printing all user account data
void customerPrint(float accounts[][6]);                                                 // customer function for printing a single user's data
int print(float[][6]);                                                                   // managerial OR customer function for printing transaction data in the console AND to a file
void goodbye(float[][6]);                                                                // managerial function to exit the program AND print all data to a file
int accountNumberAuthenticator(int &acc);                                                // authentication function that checks whether a user-inputted account number is correct/available
int accountandPINAuthenticator(float[][6], int &acc, int &pin, int tries = 0);           // authentication function built off of accountNumberAuthenticator that also checks for PIN correctness
int accountAndPinAndClosureAuthenticator(float[][6], int &acc, int &pin, int tries = 0); // authentication function built off of accountandPINAuthenticator that also checks for account closure
int managerAuthentication();                                                             // managerial authentication function to see if the inputted PIN is the manager's

float accounts[101][6] = {0}; // array that holds ALL bank information: acct. number on 1st column, PIN on 2nd, balance on 3rd, deposit total on 4th, withdrawal total on 5th, closure status on 6th

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
            openaccount(accounts, 100);
        }
        else if (insert == 'B')
        {
            balanceinquiry(accounts);
        }
        else if (insert == 'D')
        {
            deposit(accounts);
        }
        else if (insert == 'W')
        {
            withdraw(accounts);
        }
        else if (insert == 'C')
        {
            closeaccount(accounts);
        }
        else if (insert == 'I')
        {
            interest(accounts);
        }
        else if (insert == 'P')
        {
            print(accounts);
        }
        else if (insert == 'E')
        {
            goodbye(accounts);
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

void openaccount(float accounts[][6], int size)
{
    int acc;
    cout << "Which account number do you want from the range (1001-1101)? The following are available: \n\n"
         << endl;

    for (int row = 0; row < 11; row++) // code to print available account numbers (necessary since it's the user and not the program that picks them)
    {
        for (int col = 0; col < 10; col++)
        {
            if (accounts[10 * row + col + 1][0] != 0 && ((10 * row) + col) <= 100)
            {
                cout << "     ";
            }
            else if (accounts[10 * row + col + 1][0] == 0 && ((10 * row) + col) <= 100)
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
    if (accounts[size][0] == 0)
    {
        cout << "Enter initial deposit: ";
        cin >> accounts[size][2];
        while (accounts[size][2] < 25)
        {
            cout << "Initial deposit should be 25 and above. Please try again." << endl;
            cin >> accounts[size][2];
        }
        cout << "Enter your new PIN: ";
        cin >> accounts[size][1];
        while (accounts[size][1] < 1000 || accounts[size][1] > 9999)
        {
            cout << "Invalid PIN. Please enter a four-digit number." << endl;
            cin >> accounts[size][1];
        }
        accounts[size][0] = acc;
        cout << "Account number -" << (int)accounts[size][0] << "- has been opened." << endl;
    }
    else
    {
        cout << "Account in use. Please retry and select a new account." << endl;
    }
}

void balanceinquiry(float accounts[][6])
{
    int acc = 0, pin = 0;
    if (accountandPINAuthenticator(accounts, acc, pin) == 1)
    {
        cout << "Your balance is: " << accounts[acc - 1000][2] << endl;
    }
}

void deposit(float accounts[][6])
{
    int acc = 0, pin = 0;
    float new_deposit = 0;
    if (accountAndPinAndClosureAuthenticator(accounts, acc, pin) == 1)
    {
        cout << "Enter the amount you want to deposit: ";
        cin >> new_deposit;
        while (new_deposit < 0)
        {
            cout << "Negative amount not supported. Please retry: " << endl;
            cin >> new_deposit;
        }
        accounts[acc - 1000][2] += new_deposit;
        accounts[acc - 1000][3] += new_deposit;
        cout << "\nSuccessfully deposited: " << new_deposit << " BIRR";
    }
}

void goodbye(float accounts[][6])
{
    if (managerAuthentication() == 1)
    {
        cout << setfill('*') << setw(140) << "\n";
        cout << setfill(' ') << setw(70) << right << "Thank You For Using META Bank!\n";
        cout << setfill('*') << setw(140) << "\n";
    }
}

void withdraw(float accounts[][6])
{
    int acc = 0, trys = 0, pin = 0;
    float withdrawal;
    if (accountAndPinAndClosureAuthenticator(accounts, acc, pin) == 1)
    {
        int i = acc - 1000;
        {
            cout << "Your current balance stands at: " << accounts[i][2];
        beg:
            cout << "\nHow much do you wish to withdraw: ";
            cin >> withdrawal;
            if (withdrawal >= 0)
            {

                if (accounts[i][2] >= withdrawal)
                {
                    accounts[i][4] += withdrawal;
                    accounts[i][2] -= withdrawal;
                    cout << "\t \\\\ Money withdrawn successfully.\\\\ \n";
                    cout << "Remaining balance: " << accounts[i][2] << endl;
                    cout << "Withdrawn amount: " << withdrawal << endl;
                }

                else
                {
                    cout << "  Error: Insufficient funds to make withdrawal." << endl;
                    if (trys != 3)
                    {
                        trys++;
                        goto beg;
                    }
                }
            }
            else
            {
                cout << "!! Negative amount is not computable. !! \n";
                if (trys != 3)
                {
                    trys++;
                    goto beg;
                }
            }
        }
    }
}
