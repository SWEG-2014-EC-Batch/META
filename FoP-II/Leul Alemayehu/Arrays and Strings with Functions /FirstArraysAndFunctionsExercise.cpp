#include <iostream>

void arrayExtremeSum(double *numArray, int arrayLength);

int main()
{
    int arrayLength = 0;
    std::cout << "How many elements does ths array need: ";
    std::cin >> arrayLength;
    double *numArray = new double(arrayLength);
    for (int i = 0; i < arrayLength; i++)
    {
        std::cout << "\nEnter array element number " << i + 1 << ": ";
        std::cin >> numArray[i];
    }
    arrayExtremeSum(numArray, arrayLength);
}

void arrayExtremeSum(double *numArray, int arrayLength)
{
    std::cout << "\n First element is " << numArray[0] << std::endl;
    std::cout << "\n Final element is " << numArray[arrayLength - 1] << std::endl;
    std::cout << "\n Their sum is " << numArray[0] + numArray[arrayLength - 1];
}
