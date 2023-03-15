//This C++ program reverses the digits of an input, turning 124125 into 521421, for instance.
#include <iostream>
int main(){
    int inputNumber;
    int reversedNumber = 0;
    std::cout << "Input number whose digits to reverse: ";
    std::cin >> inputNumber;
    int inputNumberPrintableCopy = inputNumber;
    while(inputNumber != 0){
        reversedNumber *= 10; //multiplying the reversedNumber variable by 10 places a zero at its end, basically allowing us to add single digits to the end of the output. 
        reversedNumber += inputNumber%10; //adding the input number modulo 10 to the reversedNumber variable effectively means adding the input's final digit to it.
        inputNumber = inputNumber/10; //once the process is done, divide the inputNumber by 10 to expose the next digit
    }
    std::cout << inputNumberPrintableCopy << " with digits reversed is " << reversedNumber << "."; 
    return 0;
    }