#include <iostream>
#include <string.h>
#include <ctype.h>

// auxiliary function to determine length of the string only
int stringLength(char message[])
{
    int strLengthAux = 0;
    for (int i = 0;; i++)
    {
        if (message[i] != '\0')
            strLengthAux++;
        if (message[i] == '\0')
            break;
    }
    return strLengthAux;
}

// finding string length, vowel count, and consonant count
void stringOverall(char message[])
{
    int strLength = 0;
    int vowelCount = 0;
    int consonantCount = 0;
    for (int i = 0;; i++)
    {
        if (message[i] != '\0')
            strLength++;
        if (message[i] == '\0')
            break;
    }
    for (int i = 0; i < strLength; i++)
    {
        if (tolower(message[i]) == 'a' || tolower(message[i]) == 'e' || tolower(message[i]) == 'i' || tolower(message[i]) == 'o' || tolower(message[i]) == 'u')
        {
            vowelCount++;
        }
        else if ((65 < message[i] && 90 > message[i]) || (97 < message[i] && 122 > message[i]))
        {
            consonantCount++;
        }
    }
    std::cout << "The message is " << strLength << " character(s) long. It has " << vowelCount << " vowel letter(s) and " << consonantCount << " consonant letter(s)";
}

// string reverser
void stringRev(char message[])
{
    for (int i = 0; message[i] != '\0'; i++)
    {
        if (i == 0)
            std::cout << "Below is the input string, reversed: \n";
        std::cout << message[stringLength(message) - 1 - i];
    }
}

int lengComp(char firstString[], char secondString[])
{
    if (stringLength(firstString) == stringLength(secondString))
        return 0;
    if (stringLength(firstString) > stringLength(secondString))
        return 1;
    if (stringLength(firstString) < stringLength(secondString))
        return -1;
}

// string "lowercaser"
void strLowercaser(char message[])
{
    char *revString = new char(stringLength(message));
    for (int i = 0; message[i] != '\0'; i++)
    {
        revString[i] = tolower(message[i]);
        std::cout << revString[i];
    }
}

// string "uppercaser"
void strUppercaser(char message[])
{
    char *revString = new char(stringLength(message));
    for (int i = 0; message[i] != '\0'; i++)
    {
        revString[i] = tolower(message[i]);
        std::cout << revString[i];
    }
}