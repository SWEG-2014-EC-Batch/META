#include <iostream>
#include <cmath>
using namespace std;


int main () {
float X, Y, result;

    cout << "Enter base (X): ";
    cin >> X ;
    cout<<"Enter exponent (Y): ";
    cin >> Y;

   // result =  // Result = X^Y

    cout << X << "^" << Y << " = " << pow(X, Y); 
    
    return 0;
}