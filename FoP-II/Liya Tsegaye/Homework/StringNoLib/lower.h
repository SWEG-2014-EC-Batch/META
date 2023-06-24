
using namespace std;

void Lowercase(string &str) {
    cout << "Enter a string: ";
   cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    } cout << "In lowercase: " << str << endl;
}

