#include <iostream>
using namespace std;
// function C calls function A, function A calls function B, function B calls function C
void functionA();
void functionB();
int main()
{
    functionA();
    functionB();
}
void functionA()
{
    functionB();
    string name;
    cout << "Please enter name: ";
    getline(cin, name);
    cout << "Hello, " << name << "\nWelcome to M.P";
}
void functionB()
{
    functionA();
    cout << "\nCONFUSION!!!!!\n";
}