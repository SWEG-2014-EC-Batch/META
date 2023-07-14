#include <iostream>
#include <cmath>
#include <iomanip>

// the function to print the actual butterfly pattern, centered about a user-defined number
void butterflyPrinter(int inputNumber)
{
    for (int rowNumber = 0; rowNumber <= 2 * inputNumber; rowNumber++)
    {
        for (int columnNumber = 0; columnNumber <= 2 * inputNumber; columnNumber++)
        {
            //the closer to the middle row one gets, the more numbers are printed
            if (inputNumber - abs(columnNumber - (inputNumber)) <= inputNumber - abs(rowNumber - (inputNumber)))
            {
                if (inputNumber - abs(columnNumber - (inputNumber)) >= 10)
                {
                    //below is the line that whittles any 2+ digit numbers down to their first digit to avoid space issues
                    std::cout << (inputNumber - abs(columnNumber - (inputNumber))) % 10 << " ";
                }
                else
                {
                    //below is the line, almost identical to the above, that outputs 0, 1, 2, ... inputNumber - 1, inputNumber, inputNumber + 1, ... 2, 1, 0
                    std::cout << inputNumber - abs(columnNumber - (inputNumber)) << " ";
                }
            }
            else
            {
                //we print two spaces instead of a number followed by a space if our condition fails
                std::cout << "  ";
            }
            if (columnNumber == 2 * inputNumber)
            {
                //once the final column, numbered 2*inputNumber, is printed, a new line is necessary
                std::cout << '\n';
            }
        }
    }
}

// the function for the menu
void butterflyMenu(int &inputNumber, char &inputValue)
{
    // use a loop to print a border of asterisks, 80 long, above the menu
    for (int i = 0; i < 80; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    // print the menu title with some spaces for alignment
    std::cout << std::setw(45) << std::right << "META Butterfly Printer" << std::endl;

    // print the menu options with some spaces for alignment
    std::cout << "\nPlease enter a number based on which a pattern should be printed (default is 9): ";
    std::cin >> inputNumber;
    std::cout << "\nEnter positive integer or letter to print pattern: ";
    std::cin >> inputValue;

}