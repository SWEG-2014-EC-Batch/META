#include <iostream>
#include <cmath>
int main(){
    int inputNumber;
    int digitFactorialSum = 0;
    std::cout << "Input number whose \"strength\" to check: ";
    std::cin >> inputNumber;
    int inputNumberPrintableCopy = inputNumber;
    while(inputNumber != 0){
        digitFactorialSum += inputNumber%10 * tgamma(inputNumber%10);
        inputNumber = inputNumber/10;
    }
    if(inputNumberPrintableCopy == digitFactorialSum){
        std::cout << inputNumberPrintableCopy << " is a Strong number.";
    }
    else{
        std::cout << inputNumberPrintableCopy << " is not a Strong number.";
    }
}