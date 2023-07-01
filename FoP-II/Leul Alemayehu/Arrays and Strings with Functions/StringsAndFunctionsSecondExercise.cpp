#include <iostream>
#include <ctype.h>
#include <string>

void stringVowelExtractor(std::string message);

int main()
{
    std::string message;
    std::cout << "\nInput message: ";
    getline(std::cin, message);
    stringVowelExtractor(message);
}

void stringVowelExtractor(std::string message)
{
    int vowelCounter = 0;
    for (int i = 0; i < message.length(); i++)
    {
        if (tolower(message[i]) == 'a' || tolower(message[i]) == 'e' || tolower(message[i]) == 'i' || tolower(message[i]) == 'o' || tolower(message[i]) == 'u')
        {
            vowelCounter++;
            if (vowelCounter == 1)
                std::cout << "\nThe program has found the following vowel(s): ";
            std::cout << message[i] << " ";
        }
    }
    if (vowelCounter == 0)
    {
        std::cout << "\nNo vowels were found in the provided string.";
    }
}