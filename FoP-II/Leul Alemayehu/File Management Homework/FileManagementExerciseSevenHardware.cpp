#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctype.h>

using namespace std;

const int TOOl_COUNT = 100;

struct tool
{
    int recordNumber = 0;
    string toolName = "";
    int quantity = 0;
    float cost = 0;
} inventory[TOOl_COUNT], inventoryCrawl[TOOl_COUNT];

void recordInput();

void toolLister();

void recordDeleter();

void recordUpdater();

int main()
{
    char selection = 'Q';
    inventory[2] = {3, "Electric sander", 7, 57.98};
    inventory[16] = {17, "Hammer", 76, 11.99};
    inventory[23] = {24, "Jig saw", 21, 11.00};
    inventory[38] = {39, "Lawn mower", 3, 79.50};
    inventory[55] = {56, "Power saw", 18, 99.99};
    inventory[67] = {68, "Screwdriver", 106, 6.99};
    inventory[76] = {77, "Sledgehammer", 11, 21.50};
    inventory[82] = {83, "Wrench", 34, 7.50};
    ofstream inputter("hardware.dat", ios::binary);
    if (inputter.is_open() == 1)
    {
        for (int i = 0; i < TOOl_COUNT; i++)
        {
            inputter.write((char *)&inventory[i], sizeof(tool));
        }
        inputter.close();
    }
    else
        cout << "Error: Failure in file opening main";
    cout << "\n\nWelcome to the Hardware Store Inventory Management Program!\n";
    do
    {
    cout << "\nPlease select one of the following operations: ";
    cout << "\nTo input a new record, input I "
         << "\nTo list all records, input L "
         << "\nTo delete a record, input D "
         << "\nTo update a record, input U \n"
         << "\nChoice: ";
    cin >> selection;
    if(toupper(selection) == 'I') recordInput();
    if(toupper(selection) == 'L') toolLister();
    if(toupper(selection) == 'D') recordDeleter();
    if(toupper(selection) == 'U') recordUpdater();
    cout << "\n\nEnter Q to quit, and any other key to continue: ";
    cin >> selection;
    } while(toupper(selection) != 'Q');
}

void recordInput()
{
    int searchRecord = 0;
    tool dummyTool = {0, "", 0, 0};
    char choice = 'B';
    fstream writer("hardware.dat", ios::in | ios::out | ios::binary);

    if (writer.is_open() == 1)
    {
        cout << "\nYou have chosen to do data input.\n";
        do
        {
            choice = 'B';
            cout << "\nInput record number for data input:";
            cin >> searchRecord;
            cin.ignore();
            writer.seekg((searchRecord - 1) * sizeof(tool));
            writer.read((char *)&dummyTool, sizeof(tool));
            if (dummyTool.recordNumber != 0)
            {
                cout << "\nNote: A record with this number already exists: \n"
                     << setw(15) << dummyTool.recordNumber << setw(25) << dummyTool.toolName << setw(15) << dummyTool.quantity << setw(15) << dummyTool.cost
                     << "\nDo you want to overwrite this record (Y) or choose another record number (N)? ";
                cin >> choice;
                cin.ignore();
            }
        } while (toupper(choice) == 'N');

        if (dummyTool.recordNumber == 0 || (choice == 'Y' || choice == 'y'))
        {
            dummyTool.recordNumber = searchRecord;
            cout << "\nInput tool name: ";
            getline(cin, dummyTool.toolName);
            cout << "\nInput available quantity of " << dummyTool.toolName << ": ";
            cin >> dummyTool.quantity;
            cout << "\nInput cost of " << dummyTool.toolName << ": ";
            cin >> dummyTool.cost;
            writer.seekp((searchRecord - 1) * sizeof(tool));
            writer.write(reinterpret_cast<char*>(&dummyTool), sizeof(tool));
        }
        writer.close();
    }
    else
        cout << "Error: Failure in file opening operation.";
}

void toolLister()
{
    ifstream crawlObj("hardware.dat", ios::in | ios::binary);
    if (crawlObj.is_open() == 1)
    {
        cout << "\nYou have chosen to list all available tools.\n\n";
        crawlObj.seekg(ios::beg);
        cout << setw(15) << "Record number" << setw(25) << "Tool" << setw(15) << "Quantity" << setw(15) << "Cost\n";
        for (int i = 0; i < TOOl_COUNT; i++)
        {
            crawlObj.read((char *)&inventoryCrawl[i], sizeof(tool));
            if (inventoryCrawl[i].recordNumber != 0)
            {
                cout << setw(15) << inventoryCrawl[i].recordNumber << setw(25) << inventoryCrawl[i].toolName << setw(15) << inventoryCrawl[i].quantity << setw(15) << inventoryCrawl[i].cost << endl;
            }
        }
        crawlObj.close();
    }
    else
        cout << "Error: Failure in file opening toolLister";
}

void recordDeleter()
{
    int searchRecord = 0;
    tool searchTool = {0, "", 0, 0};
    tool deleteTool = searchTool;
    char choice = 'B';
    fstream deleter("hardware.dat", ios::in | ios::out | ios::binary);

    if (deleter.is_open() == 1)
    {
        cout << "\nYou have chosen to do a record deletion.\n";
        cout << "\nInput record number for data deletion:";
        cin >> searchRecord;
        deleter.seekg((searchRecord - 1) * sizeof(tool));
        deleter.read((char *)&searchTool, sizeof(tool));
        if (searchTool.recordNumber != 0)
        {
            cout << "\nNote: The following record is about to be deleted: \n"
                 << setw(15) << searchTool.recordNumber << setw(25) << searchTool.toolName << setw(15) << searchTool.quantity << setw(15) << searchTool.cost
                 << "\nDo you wish to proceed (Y/N)? ";
            cin >> choice;
        }
        else cout << "\nRecord nonexistent.";

        if (toupper(choice) == 'Y')
        {
            deleter.seekp((searchRecord - 1) * sizeof(tool));
            deleter.write((char *)&deleteTool, sizeof(tool));
        }
        else
            cout << "\nDeletion canceled.";
        deleter.close();
    }
    else
        cout << "Error: Failure in file opening operation.";
}

void recordUpdater()
{
    int searchRecord = 0;
    tool searchTool = {0, "", 0, 0};
    char choice = 'B';
    fstream updater("hardware.dat", ios::in | ios::out | ios::binary);

    if (updater.is_open() == 1)
    {
        cout << "\nYou have chosen to do a record update.\n";
        cout << "\nInput record number for data update:";
        cin >> searchRecord;
        updater.seekg((searchRecord - 1) * sizeof(tool));
        updater.read((char *)&searchTool, sizeof(tool));
        if (searchTool.recordNumber != 0)
        {
            cout << "\nNote: The following record is about to be updated: \n"
                 << setw(15) << searchTool.recordNumber << setw(25) << searchTool.toolName << setw(15) << searchTool.quantity << setw(15) << searchTool.cost
                 << "\nDo you wish to proceed (Y/N)? ";
            cin >> choice;
        }
        else
            cout << "\nRecord number nonexistent.";

        if (toupper(choice) == 'Y')
        {
            searchTool.recordNumber = searchRecord;
            cout << "Input updated name of what is now " << searchTool.toolName << " (input old name if no change is desired): ";
            cin.ignore();
            getline(cin, searchTool.toolName);
            cout << "Input updated quantity; what is now " << searchTool.quantity << " (input old quantity if no change is desired): ";
            cin >> searchTool.quantity;
            cout << "Input updated cost; cost is now " << searchTool.cost << " (input old cost if no change is desired): ";
            cin >> searchTool.cost;
            updater.seekp((searchRecord-1)*sizeof(tool));
            updater.write((char*)&searchTool,sizeof(tool));
        }
        else
            cout << "\nUpdate canceled.";
        
        updater.close();
    }
    else
        cout << "Error: Failure in file opening operation.";
}