#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

struct hardware
{
    int record, quantity;
    string toolName;
    float cost;
} myHardware[100],emp[100];

void input(hardware input[]);
void list(hardware input[]);
void change(hardware input[]);
void update(hardware input[]);

int main()
{
    top:
    cout << "Enter 1 for : Inputing records";
    cout << "\nEnter 2 for: Listing all records of tools";
    cout << "\nEnter 3 for: Deleting a record of a tool";
    cout << "\nEnter 4 for: Updating records of a tool :";
    int i;
    cin >> i;
    if (i == 1)
    {
        input(myHardware);
    }
    else if (i == 2)
    {
        list(emp);
    }
    else if (i == 3)
    {
        change(myHardware);
    }
    else if (i == 4)
    {
        update(myHardware);
    }
    cout<<"Enter \"e\" to exit or any other letter to continue: ";
    char e; cin>>e;
    if(e!='e' || e!='E'){
        goto top;
    }
}
void input(hardware input[])
{
    int i;
    ofstream fout("hardware.dat", ios::out);
    if(!fout){
        cout<<"Task failed";
    }
ab:
    cout << "Input record number: ";
    cin >> i;
    if (input[i].record != i)
    {
        input[i].record = i;
        cout << "Enter name of tool: ";
        cin >> input[i].toolName;
        cout << "Enter quantitiy: ";
        cin >> input[i].quantity;
        cout << "Enter cost: ";
        cin >> input[i].cost;
        fout << input[i].record << " " << input[i].toolName << " "
             << input[i].quantity << " " << input[i].cost << endl;
    }
    else
    {
        cout << "This record is already occupied with another tool: ";
    }
    cout << "Press 1 to continue inserting records: ";
    cin >> i;
    if (i == 1)
    {
        goto ab;
    }
    fout.close();
}


void list(hardware input[])
{
    ifstream fin("hardware.dat", ios::in);

    for (int i = 0; i <= 99; i++) {
        fin >> input[i].record >> input[i].toolName
            >> input[i].quantity >> input[i].cost;
        if (input[i].record != 0) {
            cout << input[i].record << "\t" << input[i].toolName
                 << "\t" << input[i].quantity << "\t" << input[i].cost
                 << endl;
        }
    }

    fin.close();
}

void change(hardware input[])
{
    int record;
    char a;
    ifstream fin("hardware.dat", ios::in);
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    // Read employee information from file
    for (int i = 0; i <= 99; i++) {
        fin >> input[i].record >> input[i].toolName
            >> input[i].quantity >> input[i].cost;
    }
    fin.close();

 
    cout << "Enter a record number to delete all past records: ";
    cin >> record;

    bool found = false;
    for (int i = 0; i <= 99; i++) {
        if (input[i].record == record) {
            found = true;
            break;
        }
    }

    if (found) {
       
        cout << input[record].record << "\t" << input[record].toolName
             << "\t" << input[record].quantity << "\t" 
             << input[record].cost << endl;

  
        cout << "Are you sure you want to delete this record(Y/N): ";
        cin >> a;

     
        if (toupper(a) == 'Y') {
            for (int i = 0; i <= 99; i++) {
                if (input[i].record == record) {
                    input[i] = {0, 0, "", 0};
                    break;
                }
            }

            
            ofstream fout("hardware.dat", ios::out);
            for (int i = 0; i <= 99; i++) {
                if (input[i].record != 0) {
                    fout << input[i].record << " " 
                         << input[i].toolName << " "
                         << input[i].quantity << " " 
                         << input[i].cost << endl;
                }
            }
            fout.close();
        } else {
            cout << "Previous record maintained\n";
        }
    } else {
        cout << "Record not found" << endl;
    }
}

void update(hardware input[])
{
    int record;
    char a;
    ifstream fin("hardware.dat", ios::in);
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

   
    for (int i = 0; i <= 99; i++) {
        fin >> input[i].record >> input[i].toolName
            >> input[i].quantity >> input[i].cost;
    }
    fin.close();

   
    cout << "Enter a record number to update past records: ";
    cin >> record;

   
    bool found = false;
    for (int i = 0; i <= 99; i++) {
        if (input[i].record == record) {
            found = true;
            break;
        }
    }

    if (found) {
       
        cout << input[record].record << "\t" << input[record].toolName
             << "\t" << input[record].quantity << "\t" 
             << input[record].cost << endl;


        cout << "Are you sure you want to update this (Y/N): ";
        cin >> a;

        
        if (toupper(a) == 'Y') {
            cout << "Enter updated quantity: ";
            cin >> input[record].quantity;
            cout << "Enter updated cost: ";
            cin >> input[record].cost;

            
            ofstream fout("hardware.dat", ios::out);
            for (int i = 0; i <= 99; i++) {
                if (input[i].record != 0) {
                    fout << input[i].record << " " 
                         << input[i].toolName << " "
                         << input[i].quantity << " " 
                         << input[i].cost << endl;
                }
            }
            fout.close();
        } else {
            cout << "Previous record maintained\n";
        }
    } else {
        cout << "Record not found" << endl;
    }
}
