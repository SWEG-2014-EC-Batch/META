#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUMBER_COUNT = 18; // number of numbers to process plus the counters for group sizes
const int GROUP_COUNT = 3;   // number of groups of numbers to process

int main()
{
    float numHolder[NUMBER_COUNT];
    float averageHolder[GROUP_COUNT][3] = {0}; // first column holds sums, the second averages, the third counts. Number of rows equals number of groups of numbers to process
    int groupCounter = 0;                      // keeps track of the number of groups processed
    ifstream numberRead("ExQ5Numbers.txt");
    if (numberRead.is_open())
    {
        for (int i = 0; numberRead.eof() == false; i++)
        {
            numberRead >> numHolder[i];
        }
        for (int i = 0; i < NUMBER_COUNT; i++)
        {
            if (numHolder[i] < 10)
            {
                for (int j = i + 1; numHolder[j] > 10; j++)
                {
                    averageHolder[groupCounter][0] += numHolder[j];
                    averageHolder[groupCounter][2]++;
                }
                averageHolder[groupCounter][1] = averageHolder[groupCounter][0] / averageHolder[groupCounter][2];
                groupCounter++;
            }
        }
        cout << "\n" << setw(15) << "Group Number" << setw(15) << "Member Count" << setw(15) << "Sum" << setw(15) << "Average";
        for (int i = 0; i < GROUP_COUNT; i++)
        {
            cout << "\n" << setw(15) << i + 1 << setw(15) << averageHolder[i][2] << setw(15) << averageHolder[i][0] << setw(15) << averageHolder[i][1];
        }
    }
}