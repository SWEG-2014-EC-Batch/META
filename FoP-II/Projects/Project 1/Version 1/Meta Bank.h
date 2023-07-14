
#include <ctype.h>
#include<iostream>
using namespace std;
#define specialkey 1234
struct user
{
    char choice;
    int account_number, pinnumber;
    float amount, sameaccount, deposit, withdraw, closedaccount = 0;
};
void menu();
void openaccount(user[], int);
void balanceinquiry(user[], int);
void deposit(user[], int);
void withdraw(user[], int);
void closeaccount(user[], int);
void interest(user[], int);
void print(user[], int);
void goodbye();
user info[100];
void menu()
{
    char insert;
    while (insert != 'E')
    {
        cout << "\n\n\t*******WELCOME TO BANK OF META*******\n\n";

        cout << "Which transaction type do you want to operate?\n\n";
        cout << "\t1. To open an account enter \"O\" \n"
             << "\t2. To know your remaining balance enter  \"B\" \n"
             << "\t3. To deposit money into an account enter\"D\" \n"
             << "\t4. To withdraw money from an account enter \"W\" \n"
             << "\t5. To close your account enter\"C\" \n"
             << "\t6. To compute your interest enter \"I\" \n"
             << "\t7. To print all account and their perspective amount enter\"P\" \n"
             << "\t8. To close all the account and exit the system enter \"E\" \n";
        cout << "\n \t Menu command: ";
        cin >> insert;
        insert = toupper(insert);
        cout<<fixed<<setprecision(2);
        if (insert == 'O')
        {
            openaccount(info, 100);
        }
        else if (insert == 'B')
        {
            balanceinquiry(info, 100);
        }
        else if (insert == 'D')
        {
            deposit(info, 100);
        }
        else if (insert == 'W')
        {
             withdraw(info,100);
        }
        else if (insert == 'C')
        {
            closeaccount(info,100);
        }
        else if (insert == 'I')
        {
            interest(info,100);
        }
        else if (insert == 'P')
        {
            print(info,100);
        }
        else if (insert == 'E')
        {
            goodbye();
            break;
        }
        else
        {
            cout << "Invalid command";
        }
    }
}
void openaccount(user info[], int size)
{
    int acc;
    cout << "Which account number do you want from the range of (1001-1101)" << endl;
    cin >> acc;
    while (acc < 1001 || acc > 1101)
    {
        cout << "Out of range. Please try again correctly." << endl;
        cin >> acc;
    }
    size = acc - 1000;
    if (info[size].account_number == 0)
    {
        cout << "Enter the initial amount: ";
        cin >> info[size].amount;
        while (info[size].amount < 25)
        {
            cout << "Initial Amount should be 25 and above. Please try again." << endl;
            cin >> info[size].amount;
        }
        cout << "enter your new pin: ";
        cin >> info[size].pinnumber;
        while (info[size].pinnumber < 1000 || info[size].pinnumber > 9999)
        {
            cout << "Invalid pin. Please enter a four-digit number." << endl;
            cin >> info[size].pinnumber;
        }
        info[size].account_number = acc;
        cout << "Account number -" << info[size].account_number << "- has been opened." << endl;
    }
    else
    {
        while (info[size].account_number != 0)
        {
            cout << "Account in use. Please select a new account." << endl;
            cin >> acc;
            size = acc - 1000;
        }
    }
}
void balanceinquiry(user info[], int i)
{
    int acc, pin, trys = 0;
    cout << "Enter your account number: ";
    cin >> acc;
    while (acc < 1001 || acc > 1101)
    {
        cout << "Out of range.\n Please try again." << endl;
        cin >> acc;
    }
    i = acc - 1000;
    if (info[i].account_number != 0)
    {
        cout << "Enter your pin: " << endl;
        cin >> pin;
        if (info[i].pinnumber == pin)
        {
            trys = 0;
            cout << "Your Balance is: " << info[i].amount << endl;
        }
        else
        {
            while (info[i].pinnumber != pin)
            {
                cout << "Incorrect pin. Try again" << endl;
                cin >> pin;
                trys++;
            }
            if (trys > 3)
            {
                cout << "to amny entries good bye" << endl;
                return;
            }
        }
    }
}
void deposit(user info[], int i)
{
    int acc, new_deposit;
    cout << "Enter the account number: ";
    cin >> acc;
    i = acc - 1000;
    while (acc < 1001 || acc > 1101)
    {
        cout << "Out of range. Please try again correctly." << endl;
        cin >> acc;
    }
    if (info[i].account_number != 0)
    {
        cout << "Enter the amount you want to deposit: ";
        cin >> new_deposit;
        if (new_deposit > 0)
        {
            
            info[i].deposit += new_deposit;
            info[i].amount += new_deposit;
            cout<<"Successfully deposited: "<<new_deposit<<" BIRR";
        }

        else
        {
            while (new_deposit < 0)
            {
                cout << "Negative amount not supported." << endl;
                cin >> new_deposit;
            }
        }
    }
    else
    {
        cout << "Account does not exist. Try again." << endl;
        cin >> acc;
    }
}

void goodbye()
{
    int pin, trys = 0;
    cout << "Enter Manager's PIN: ";
    cin >> pin;
    if (pin == specialkey)
    {
        trys = 0;
        cout << "******************************************************************************************\n\n";
        cout << "                      Thank You For Using META Bank!\n";
        cout << "******************************************************************************************";
    }
    else
    {
        while (pin != specialkey)
        {
            cout << "Incorrect PIN. Try again.";
