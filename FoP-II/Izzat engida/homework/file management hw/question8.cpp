#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("Sheet5Ex5.cpp");
    if (!file) {
        cerr << "Error opening file\n";
        return 1;
    }
    int counts[26] = {0};
    char ch;
    while (file >> ch) {
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
    file.close();
    
    cout << "CHARACTER OCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        cout <<char('a' + i) << ' ' << counts[i] << '\n';
    }
}
