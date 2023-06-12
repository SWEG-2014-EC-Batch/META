//This C++ program outputs an input number's digit sum.
#include <iostream>
int main(){
    int inputNumber;
    int digitSum = 0;
    std::cout << "Enter number whose digit sum to find: ";
    std::cin >> inputNumber;
    int inputNumberPrintLater = inputNumber; //because we'll be doing math operations that change inputNumber, we'll use a variable to hold its original value.
    while (inputNumber != 0){
        digitSum += (inputNumber%10); //this adds the last digit of the inputNumber to the digitSum.
        inputNumber = inputNumber/10; //we divide inputNumber by 10 to expose the next digit.
    }
    std::cout << inputNumberPrintLater << "'s digit sum is " << digitSum << "."; //we print inputNumberPrintLater because inputNumber has been reduced to 0.
    return 0;
}