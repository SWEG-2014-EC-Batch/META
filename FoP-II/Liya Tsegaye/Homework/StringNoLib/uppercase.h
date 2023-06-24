
using namespace std;

void Uppercase(string &str) {
    cout << "Enter a string: ";
   cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    } cout << "In uppercase: " << str << endl;
}

