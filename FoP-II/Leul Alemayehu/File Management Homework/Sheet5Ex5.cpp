#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream file("Sheet5Ex5.cpp");
    char receiver;
    int count[26] = {0}; //indices 0–25 are for a–z respectively
    while (file >> receiver)
    {
        if (receiver >= 'a' && receiver <= 'z')
            count[receiver - 'a']++;
    }

    cout << setw(15) << "Character" << setw(15) << "Occurrences\n\n";
    for (int i = 0; i < 26; i++)
    {
        cout << setw(15) << char(i + 'a') << setw(15) << count[i] << endl;
    }
    return 0;
}