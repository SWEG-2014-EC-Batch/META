#include <iostream>
#include <cmath>
#include <iomanip>
#include "METAButterflyHeader.h"

int main()
{
    int inputNumber = 0;
    char inputValue;
    do
    {
        inputNumber = 0;
        inputValue = '0';

        butterflyMenu(inputNumber, inputValue);

        if (int(inputValue - '0') <= 0) return 0;

        butterflyPrinter(inputNumber);
        std::cout << "\nEnter 1 to start again, any other key to exit: ";
        std::cin >> inputNumber; // prevents program from exiting instantly
    } while (inputNumber == 1);
}