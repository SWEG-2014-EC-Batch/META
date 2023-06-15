#include <iostream>
#include "MyFirstHeaderFile.h"
#ifndef MyFirstHeaderFile
#define MyFirstHeaderFile
double getProduct(int firstNum, double secondNum)
{
    std::cout << "Insert 2 integers respectively (one normal and one double) " << std::endl;
    std::cin >> firstNum >> secondNum;
    return firstNum * secondNum;
}
#endif
using namespace std;
int main()
{
    int firstNum;
    double secondNum;
    double product = getProduct(firstNum, secondNum);
    cout << "Multiplicative result of these two numbers is: " << product;

    return 0;
}