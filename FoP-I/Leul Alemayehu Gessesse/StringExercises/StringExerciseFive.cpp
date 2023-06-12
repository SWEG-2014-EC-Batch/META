#include <iostream>
using std::cin;
using std::cout;
using std::string;
int main(){
    string fullName, birthday, city, output;
    cout << "Enter full name: \n";
    getline(cin,fullName);
    cout << "Enter date of birth (YYYY-MM-DD format preferred): \n";
    getline(cin,birthday);
    cout << "Enter city of birth: \n";
    getline(cin,city);
    output = fullName + " " + birthday + " @ " + city;
    cout << output;
}