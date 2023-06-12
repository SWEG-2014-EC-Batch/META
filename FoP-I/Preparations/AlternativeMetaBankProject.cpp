#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int accountCount; //user-defined number of accounts to manage
    int currentManagedAccounts = 0; //goes up every time an account is opened
    int managerialPin = 0;
    // use a loop to print a border of asterisks, 80 long, above the menu
    for (int i = 0; i < 80; i++) {
        cout << "*";
    }
    cout << endl;

    // print the menu title with some spaces for alignment
    cout << setw(40) << right << "Welcome to META Bank" << endl;

    // print the menu options with some spaces for alignment
    cout << "\nPlease select a managerial PIN: ";
    cin >> managerialPin;
    cout << "\nPlease enter the number of accounts to be managed (at least 100): ";
    cin >> accountCount;

    // use another loop to print a border of asterisks, 80 long, below the menu
    for (int i = 0; i < 0; i++) {
        cout << "*";
    }
    cout << endl;
    float **bankDataPtr = new float*[3]; //holds account numbers, PINs, and account balances. The three rows hold acct. no.s, PINs, and balances, and columns hold individual accounts
    for (int i = 0; i < 3; i++) {
        bankDataPtr[i] = new float[accountCount];
    }
    int **transactionCountPtr = new int*[8]; //transactionCountPtr counts all transactions of each type for each account
    for (int i = 0; i < 8; i++) {
        transactionCountPtr[i] = new int[accountCount];
    }
    //the first row counts transactions, the second openings, the third balance inquiries, the fourth deposits,
    //the fifth withdrawals, the sixth closures, the seventh interest calculations, and the eighth "printings"
    //a single column holds all the transactions made for a single account.

    //it'd be for the better if we initialized both arrays to 0
    for (int i = 0; i < 3 ; i++){
        for (int j = 0 ; j < accountCount ; j++){
            bankDataPtr[i][j] = 0;
        }
    }
    for (int i = 0; i < 8 ; i++){
        for (int j = 0 ; j < accountCount ; j++){
            transactionCountPtr[i][j] = 0;
        }
    }
    char transactionType = 'E'; //used to determine what transaction to do, AND is often used as a confirmation letter
    do{
        // use a loop to print a border of asterisks above the menu
        for (int i = 0; i < 80; i++) {
            cout << "*";
        }
        cout << endl;

        // print the menu options with some spaces for alignment
        cout << "\nWhich transaction would you like to perform? These are your options: \n"
            << "\n\t(O)pen an account"
            << "\n\tDo a (B)alance inquiry"
            << "\n\t(D)eposit"
            << "\n\t(W)ithdrawal" 
            << "\n\tAccount (C)losure"
            << "\n\t(I)nterest computation (Manager only)"
            << "\n\t(P)rint all accounts and balances (Manager only)"
            << "\n\t(E)xit program and close all accounts (Manager only)\n\n";

        // use another loop to print a border of asterisks below the menu
        for (int i = 0; i < 80; i++) {
            cout << "*";
        }
        cout << endl;

        // print the prompt for user input
        cout << "Choice: ";
        cin >> transactionType;
        int pinInputAttempts = 0; //counts PIN inputs for ALL transactions
        int putativePin = 0; //the user PIN the program requires the user to enter 
        int putativeCheckedAccount = 0; //the user account number the program requires the user to enter
        if(toupper(transactionType) == 'O'){
            //bank account numbers are successively assigned to each new account, starting at 1001
            double initialDeposit = 0;
            bankDataPtr[0][currentManagedAccounts] = 1001 + currentManagedAccounts;
            transactionCountPtr[0][currentManagedAccounts] = 1;
            transactionCountPtr[1][currentManagedAccounts] = 1;
            cout << "You have chosen to open a new account. \n";
            cout << "Please select a PIN: \n";
            cin >> bankDataPtr[1][currentManagedAccounts];
            cout << "What is your initial deposit (Unusual values will be rounded down)? \n";
            cin >> initialDeposit;
            bankDataPtr[2][currentManagedAccounts] =  floor(100*initialDeposit)/100; //floor operations and multiplication by 100 ensure no more than 2 decimal digits can occur
            cout << "Transaction complete. Your account number is " << bankDataPtr[0][currentManagedAccounts] << ", with an initial balance of " << bankDataPtr[2][currentManagedAccounts];
            currentManagedAccounts++;
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'B'){
            cout << "You have chosen to perform a balance inquiry. \n";
            bStartpoint:
            cout << "\nPlease input account number: \n";
            cin >> putativeCheckedAccount;
            cout << "Please input a PIN: \n";
            cin >> putativePin;
            pinInputAttempts++;
            for(int i = 0 ; i < accountCount ; i++){
                if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i] && transactionCountPtr[5][putativeCheckedAccount - 1001] != transactionCountPtr[1][putativeCheckedAccount - 1001]){
                    transactionCountPtr[0][putativeCheckedAccount - 1001] += 1;
                    transactionCountPtr[2][putativeCheckedAccount - 1001] += 1;
                    cout << "Transaction complete. The balance of account number " << bankDataPtr[0][i] << " is " << bankDataPtr[2][i];
                    break;
                }
                else if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i]){
                    cout << "Error: Transactions unavailable for closed accounts. ";
                    break;
                }
                else if (i + 1 == accountCount){
                    cout << "Error: Invalid Acct. Number or PIN entered. ";
                    if(pinInputAttempts < 3) goto bStartpoint;
                    else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
                    break;
                }
            }
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'D'){
            double depositCash = 0;
            cout << "You have chosen to perform a deposit. \n";
            dStartpoint:
            cout << "\nPlease input account number: \n";
            cin >> putativeCheckedAccount;
            cout << "Please input a PIN: \n";
            cin >> putativePin;
            pinInputAttempts++;
            for(int i = 0 ; i < accountCount ; i++){
                if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i] && transactionCountPtr[5][putativeCheckedAccount - 1001] != transactionCountPtr[1][putativeCheckedAccount - 1001]){
                    do{
                    cout << "Please enter amount to deposit: \n";
                    cin >> depositCash;
                    if(depositCash*100 != floor(depositCash*100)) std::cout << "Error: fractional coin value detected. Please try again:\n";
                    }
                    while(depositCash*100 != floor(depositCash*100));
                    bankDataPtr[2][i] += depositCash;
                    cout << "Deposit successful. The new balance of account number " << bankDataPtr[0][i] << " is " << bankDataPtr[2][i];
                    transactionCountPtr[0][putativeCheckedAccount - 1001] += 1;
                    transactionCountPtr[3][putativeCheckedAccount - 1001] += 1;
                    break;
                }
                else if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i]){
                    cout << "Error: Transactions unavailable for closed accounts. ";
                    break;
                }
                else if (i + 1 == accountCount){
                    cout << "Error: Invalid Acct. Number or PIN entered. ";
                    if(pinInputAttempts < 3) goto dStartpoint;
                    else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
                    break;
                }
            }
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'W'){
            double withdrawalCash = 0;
            cout << "You have chosen to perform a withdrawal. \n";
            wStartpoint:
            cout << "\nPlease input account number: \n";
            cin >> putativeCheckedAccount;
            cout << "Please input a PIN: \n";
            cin >> putativePin;
            pinInputAttempts++;
            for(int i = 0 ; i < accountCount ; i++){
                if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i] && transactionCountPtr[5][putativeCheckedAccount - 1001] != transactionCountPtr[1][putativeCheckedAccount - 1001]){
                    do{
                    cout << "Please enter amount to withdraw: \n";
                    cin >> withdrawalCash;
                    if(withdrawalCash*100 != floor(withdrawalCash*100)) std::cout << "Error: fractional coin value detected. Please try again:\n";
                    }
                    while(withdrawalCash*100 != floor(withdrawalCash*100));
                    if(withdrawalCash > bankDataPtr[2][i]){
                        cout << "Error: Amount to withdraw exceeds balance.";
                        break;
                    }
                    bankDataPtr[2][i] -= withdrawalCash;
                    cout << "Withdrawal successful. The new balance of account number " << bankDataPtr[0][i] << " is " << bankDataPtr[2][i];
                    transactionCountPtr[0][putativeCheckedAccount - 1001] += 1;
                    transactionCountPtr[4][putativeCheckedAccount - 1001] += 1;
                    break;
                }
                else if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i]){
                    cout << "Error: Transactions unavailable for closed accounts. ";
                    break;
                }
                else if (i + 1 == accountCount){
                    cout << "Error: Invalid Acct. Number or PIN entered. ";
                    if(pinInputAttempts < 3) goto wStartpoint;
                    else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
                    break;
                }
            }
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'C'){
            cout << "You have decided to close an account. \n";
            cStartpoint:
            cout << "\nPlease input account number: \n";
            cin >> putativeCheckedAccount;
            cout << "Please input a PIN: \n";
            cin >> putativePin;
            pinInputAttempts++;
            for(int i = 0 ; i < accountCount ; i++){
                if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i] && transactionCountPtr[5][putativeCheckedAccount - 1001] != transactionCountPtr[1][putativeCheckedAccount - 1001]){
                    cout << "Account located and closed. We are sorry to see you go; we hope we can do business again.";
                    transactionCountPtr[0][putativeCheckedAccount - 1001] += 1;
                    transactionCountPtr[5][putativeCheckedAccount - 1001] += 1;
                    break;
                }
                else if(putativeCheckedAccount == bankDataPtr[0][i] && putativePin == bankDataPtr[1][i]){
                    cout << "Error: Transactions unavailable for closed accounts. ";
                    break;
                }
                else if (i + 1 == accountCount){
                    cout << "Error: Invalid Acct. Number or PIN entered. ";
                    if(pinInputAttempts < 3) goto cStartpoint;
                    else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
                    break;
                }
            }
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'I'){
            int putativeManagerialPin = 0;
            cout << "You have chosen to perform an interest calculation. This is a MANAGERIAL operation. \n";
            iStartpoint:
            cout << "\nPlease input the manager's PIN: \n";
            cin >> putativeManagerialPin;
            pinInputAttempts++;
            if(putativeManagerialPin == managerialPin){
                float interestRate = 0;
                cout << "Input interest rate in percent, omitting the percent symbol: \n";
                cin >> interestRate;
                for(int i = 0 ; i < accountCount ; i++){
                    if(bankDataPtr[1][i] > 0){
                        bankDataPtr[2][i] *= (1+(interestRate/100));
                        transactionCountPtr[0][i] += 1;
                        transactionCountPtr[6][i] += 1;
                    }
                }
                cout << "Interest calculations complete. All account balances have been increased by " << interestRate << "%";
            }
            else{
                cout << "Error: Incorrect PIN entered. ";
                if(pinInputAttempts < 3) goto iStartpoint;
                else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
            }    
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'P'){
            int putativeManagerialPin = 0;
            cout << "You have chosen to perform a printing transaction. This is a MANAGERIAL operation. \n";
            pStartpoint:
            cout << "\nPlease input the manager's PIN: \n";
            cin >> putativeManagerialPin;
            pinInputAttempts++;
            if(putativeManagerialPin == managerialPin){
                char printTypeSelector = 'Z';
                printTypeSelectionPoint:
                cout << "Would you like to print all account numbers and balances (A) or all transactions for a single account (B)?";
                cin >> printTypeSelector;
                if(toupper(printTypeSelector) == 'A'){
                    cout << "You have chosen to print all account numbers together with their balances. They are as follows: \n";
                    cout << setw(15) << right << "Account Number" << setw(15) << right << "Balance" << endl;
                    for(int i = 0 ; i < accountCount ; i++){
                        if(bankDataPtr[0][i] > 0){
                            // use setw() to set the width of each column and right to align the values to the right
                            cout << setw(15) << right << bankDataPtr[0][i] << setw(15) << right << bankDataPtr[2][i] << endl;
                            transactionCountPtr[0][i] += 1;
                            transactionCountPtr[7][i] += 1;
                        }
                    }
                }
                else if(toupper(printTypeSelector) == 'B'){
                    int chosenAccount;
                    cout << "You have chosen to print out the transactions of a single account. \n Please enter account number: ";
                    cin >> chosenAccount;
                    for (int i = 0 ; i < accountCount ; i++){
                        if(chosenAccount == bankDataPtr[0][i]){
                            cout << "Account number " << bankDataPtr[0][i] << " has " << transactionCountPtr[0][i] << " total transactions in the following categories: \n";
                            cout << transactionCountPtr[1][i] << "\t opening \n";
                            cout << transactionCountPtr[2][i] << "\t balance inquiry/inquiries \n";
                            cout << transactionCountPtr[3][i] << "\t deposit(s) \n";
                            cout << transactionCountPtr[4][i] << "\t withdrawal(s) \n";
                            cout << transactionCountPtr[5][i] << "\t closure(s) \n";
                            cout << transactionCountPtr[6][i] << "\t interest computation(s) \n";
                            cout << transactionCountPtr[7][i] << "\t printing operation(s) \n";
                            transactionCountPtr[0][i] += 1;
                            transactionCountPtr[7][i] += 1;
                            break;
                        }
                        else if(i == accountCount - 1){
                            cout << "Error: Invalid account entered. \n";
                        }
                    }
                }
                else{
                    cout << "Invalid input. Try again (Y/N)? \n";
                    cin >> printTypeSelector;
                    if(toupper(printTypeSelector) == 'Y'){
                        goto printTypeSelectionPoint;
                    }
                }
            }
            else{
                cout << "Error: Incorrect PIN entered. ";
                if(pinInputAttempts < 3) goto pStartpoint;
                else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
            }
        }
        else if(currentManagedAccounts > 0 && toupper(transactionType) == 'E'){
            int putativeManagerialPin = 0;
            eStartpoint:
            cout << "You have chosen to exit the program, closing all accounts. This is an irreversible managerial operation; enter managerial PIN to continue: ";
            cin >> putativeManagerialPin;
            pinInputAttempts++;
            if(putativeManagerialPin == managerialPin){
                cout << "\nConfirmation received. Closing all accounts and exiting program.";
                for (int i = 0; i < 3; i++) {
                    delete[] bankDataPtr[i];
                }  
                for (int i = 0 ; i < 8 ; i++){
                    delete[] transactionCountPtr[i];
                } 
                delete[] bankDataPtr;
                delete[] transactionCountPtr;
                return 0;
            }
            else{
                cout << "Error: Incorrect PIN entered. ";
                if(pinInputAttempts < 3) {
                    cout << "Please try again: \n";
                    goto eStartpoint;
                }
                else if(pinInputAttempts >= 3) cout << "Too many attempts have been made. Please start over.";
            }
        }
        else{
            cout << "Error: Invalid transaction requested.\n";
            if(currentManagedAccounts == 0) cout << "Please note that the bank has no accounts as of yet. The only valid transaction available is opening accounts. \n";
        }
        cout << "\n\nEnter any key to continue program\n";
        cin >> transactionType;
    }
    while(1 > 0); //keeps the program running until the exit transaction is used
}
