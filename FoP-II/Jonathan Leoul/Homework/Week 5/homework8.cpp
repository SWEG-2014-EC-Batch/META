#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fio("homework8.cpp");
   

    int counts[26] = {0};
    char letter;
    while (fio >> letter) {
        if (letter >= 'a' && letter <= 'z') {
            counts[letter - 'a']++;
        }
    }

    cout << "Letters and their frequency" << endl;
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << "\t" << counts[i] << endl;
    }

    return 0;
}
