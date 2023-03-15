#include <iostream>
int main(){
    int inputNumber;
    int reversedNumber = 0;
    std::cout << "Input number whose digits to reverse: ";
    std::cin >> inputNumber;
    int inputNumberPrintableCopy = inputNumber;
    while(inputNumber != 0){
        reversedNumber *= 10; 
        reversedNumber += inputNumber%10; 
        inputNumber = inputNumber/10;
    }
    if(inputNumberPrintableCopy == reversedNumber){
        std::cout << inputNumberPrintableCopy << " is a palindrome.";
    }
    else{
        std::cout << inputNumberPrintableCopy << " is not a palindrome.";
    } 
    return 0;
    }