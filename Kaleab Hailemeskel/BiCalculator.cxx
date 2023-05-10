// CALCULATOR FOR TWO NUMBERS
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;
    cout << "enter num1: ";
    cin >> num1;
    cout << endl;

    cout << "enter operation: ";
    cin >> operation;
    cout << endl;

    cout << "enter num2:  ";
    cin >> num2;
    cout << endl;

    switch (operation)
    {
    case '+':
        cout << num1 << operation << num2 << "=" << num1 + num2;
        break; 
    case '-':
        cout << "your answer is: " << num1 - num2;
        break;
    case '*':
        cout << "your answer is: " << num1*num2;
        break;
    case '/':
        cout << "your answer is: " << num1/num2;
        break;

    default:
        cout << "unknown operator";
        break;
    }

    return 0;
}