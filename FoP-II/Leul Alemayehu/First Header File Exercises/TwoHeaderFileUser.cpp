#include <iostream>
#include "MyFirstHeaderFile.h"
#include "RandomMessagePrinter.h"
using namespace std;
int main()
{
    UselessMessagePrinter();
    int firstNum;
    double secondNum;
    double product = getProduct(firstNum, secondNum);
    cout << "Multiplicative result of these two numbers is: " << product;

    return 0;
}
