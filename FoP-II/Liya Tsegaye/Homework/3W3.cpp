#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_CUSTOMERS = 5;

int main() {
    int accountNumbers[MAX_CUSTOMERS];
    string firstNames[MAX_CUSTOMERS];
    string lastNames[MAX_CUSTOMERS];
    double balances[MAX_CUSTOMERS];

    ifstream file("customers.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return -1;
    }

    int i = 0;
    while (file >> accountNumbers[i] >> firstNames[i] >> lastNames[i] >> balances[i]) {
        i++;
    }

    file.close();

    int accountNumber;
    cout << "Enter an account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        if (accountNumbers[i] == accountNumber) {
            cout << "Name: " << firstNames[i] << " " << lastNames[i] << endl;
            cout << "Balance: $" << balances[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found" << endl;
    }

    return 0;
}
