// the purpose of this exercise is to demonstrate function declaration, definition, and calling
#include <iostream>
using namespace std;
// simultaneous function declaration and definition
void nameGreet(){
    string name;
    cout << "Please enter name: ";
    getline(cin, name);
    cout << "Hello, " << name << "\nWelcome to M.P";
}

int main(){
    nameGreet();
}
