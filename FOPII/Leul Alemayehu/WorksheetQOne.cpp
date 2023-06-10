#include <iostream>
using namespace std;

void mult(float factorOne, float factorTwo);

int main()
{
    float firstFactor, secondFactor;
    cout << "\nInput first factor: ";
    cin >> firstFactor;
    cout << "\nInput second factor: ";
    cin >> secondFactor;
    cout << "\n";
    mult(firstFactor, secondFactor);
}

void mult(float factorOne, float factorTwo)
{
    cout << factorOne * factorTwo << endl;
}