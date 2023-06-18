#include <iostream>

void valueOrderer(int &firstValue, int &secondValue, int &thirdValue);

int main()
{
    int firstInput = 0, secondInput = 0, thirdInput = 0;
    std::cout << "\nPlease input three numbers to sort, separated by enter keys:\n";
    std::cin >> firstInput >> secondInput >> thirdInput;
    std::cout << "\nOriginal inputs are in the order " << firstInput << " " << secondInput << " " << thirdInput << '\n';
    valueOrderer(firstInput, secondInput, thirdInput);
    std::cout << "Rearranged in descending order, they are " << firstInput << " " << secondInput << " " << thirdInput << '\n';
}

void valueOrderer(int &firstValue, int &secondValue, int &thirdValue)
{
    int sortIterator = 0;
    while (sortIterator < 3)
    {
        if (secondValue >= firstValue)
            std::swap(firstValue, secondValue);
        if (thirdValue >= secondValue)
            std::swap(secondValue, thirdValue);
        if (thirdValue >= firstValue)
            std::swap(firstValue, thirdValue);
        sortIterator++;
    }
}
