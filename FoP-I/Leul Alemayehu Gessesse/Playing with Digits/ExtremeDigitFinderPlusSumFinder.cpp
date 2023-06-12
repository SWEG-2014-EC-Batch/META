//This C++ program finds the first and last digits of an input number and calcualtes their sum.
#include <iostream>
int main(){
    int inputNumber;
    int firstDigit = 0;
    int finalDigit = 0;
    std::cout << "Insert number whose first and last digits, and the sum thereof, to find: ";
    std::cin >> inputNumber;
    int inputNumberPrintCopy = inputNumber;
    while(inputNumber != 0){
        if(inputNumber == inputNumberPrintCopy){
            finalDigit += inputNumber%10;
        }
        if(inputNumber/10 == 0){
            firstDigit = inputNumber;
        }
        inputNumber = inputNumber/10;
    }
    std::cout << "The first digit of " <<inputNumberPrintCopy << " is " << firstDigit << " while its last digit is " << finalDigit << ". Their sum is " << firstDigit + finalDigit << ".";
    return 0;
}