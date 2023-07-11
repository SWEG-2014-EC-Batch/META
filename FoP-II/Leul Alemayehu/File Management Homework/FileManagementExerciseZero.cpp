#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int RECORD_SIZE = 5;

void countFileUpdater(string inputFileName, int fileNumbers[], int &numberCount)
{
    string dummystring;
    ifstream inputObject(inputFileName);
    numberCount = 0;
    if (inputObject.is_open())
    {
        while (getline(inputObject, dummystring))
        {
            fileNumbers[numberCount] = stoi(dummystring);
            numberCount++;
        }
        inputObject.close();
    }
    else
    {
        cerr << "\nFile open failed.";
    }
}

int main()
{
    string filename = "ExerciseZeroIntegerRecords.txt";
    int recordArray[RECORD_SIZE];
    int recordcount = 0;
    countFileUpdater(filename, recordArray, recordcount);
    cout << "\nThe record has " << recordcount << " number(s). These are: \n";
    for (int i = 0; i < RECORD_SIZE; i++)
    {
        cout << recordArray[i] << endl;
    }
}