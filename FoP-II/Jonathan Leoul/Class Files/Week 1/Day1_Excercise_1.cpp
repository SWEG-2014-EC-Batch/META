/*Worksheet Excercise 1*/

#include <iostream>
using namespace std;

// Multiplication function

float mult()
{
    float x, y;
    cout << "Enter 2 numbers respectively" << endl;
    cin >> x >> y;
    return x * y;
}

int main()
{
    cout << mult();
    return 0;
}