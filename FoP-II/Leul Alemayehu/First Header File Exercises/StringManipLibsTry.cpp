#include <iostream>
#include <string.h>
#include <ctype.h>
#include "LeulStringManipLib.h"

int main()
{
    char messageOne[MESSAGE_LENGTH] = "", messageTwo[MESSAGE_LENGTH] = "", choice = 'n';
    std::cout << "\nWelcome to Leul's String Comparison Tool!";
    do
    {

        std::cout << "\nPlease select the string operation you wish to perform: "
                  << "\n\nEnter 'L' to find a string's length, and count of vowels and consonants."
                  << "\nEnter 'R' to reverse a string"
                  << "\nEnter 'C' to compare two strings in length"
                  << "\nEnter 'M' to convert an entire string to lowercase"
                  << "\nEnter 'B' to convert an entire string to uppercase"
                  << "\n\nChoice: ";
        std::cin >> choice;
        std::cin.ignore();
        stringInput(messageOne, choice, messageTwo);

        if (choice == 'L')
        {
            stringOverall(messageOne);
        }

        else if (choice == 'R')
        {
            stringRev(messageOne);
        }

        else if (choice == 'C')
        {
            if (lengComp(messageOne, messageTwo) == 0)
            {
                std::cout << "\nThe two strings are equal in length.";
            }
            else if (lengComp(messageOne, messageTwo) == 1)
            {
                std::cout << "\nThe first string is longer than the second.";
            }
            else if (lengComp(messageOne, messageTwo) == -1)
            {
                std::cout << "\nThe second string is longer than the first.";
            }
        }

        else if (choice == 'M')
        {
            strLowercaser(messageOne);
        }

        else if (choice == 'B')
        {
            strUppercaser(messageOne);
        }

        else
        {
            std::cerr << "\nError: Incorrect/invalid input. Note the available options and the case-sensitivity of the input and try again.";
        }

        std::cout << "\nTry again (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y');
}