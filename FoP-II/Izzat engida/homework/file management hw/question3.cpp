#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Customer {
    int account_number;
    string first_name;
    string last_name;
    double balance;
};

void create_file() {
    ofstream file("customers.txt");
    if (!file) {
        cerr << "Error creating file\n";
        return;
    }
    Customer customers[5] = {
        {1000, "Alice", "Smith", 100.50},
        {1001, "Bob", "Johnson", 200.75},
        {1002, "Charlie", "Williams", 300.25},
        {1003, "Dave", "Brown", 400.00},
        {1004, "Eve", "Jones", 500.50}
    };
    for (int i = 0; i < 5; i++) {
        file << customers[i].account_number << ' ' << customers[i].first_name << ' '
             << customers[i].last_name << ' ' << customers[i].balance << '\n';
    }
    file.close();
}

void read_file(Customer* customers, int size) {
    ifstream file("customers.txt");
    if (!file) {
        cerr << "Error opening file\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        file >> customers[i].account_number >> customers[i].first_name
             >> customers[i].last_name >> customers[i].balance;
    }
    file.close();
}

int main() {
    create_file();
    Customer customers[5];
    read_file(customers, 5);
    int account_number;
    cout << "Enter account number: ";
    cin >> account_number;
    for (int i = 0; i < 5; i++) {
        if (customers[i].account_number == account_number) {
            cout << "Name: " << customers[i].first_name << ' ' << customers[i].last_name
                      << "\nBalance: Birr" << customers[i].balance << '\n';
            break;
        }
    }
}
