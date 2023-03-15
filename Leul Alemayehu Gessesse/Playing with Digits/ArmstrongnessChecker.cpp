#include <iostream>
#include <cmath>
int main(){
    int inputNumber;
    int digitCubeSum = 0;
    std::cout << "Input number whose \"Armstrongness\" to check: ";
    std::cin >> inputNumber;
    int inputNumberPrintableCopy = inputNumber;
    if(inputNumber > 999){
        std::cerr << "Error: Armstrong numbers have at most three digits.";
        return -1;
    }
    while(inputNumber != 0){
        digitCubeSum += pow(inputNumber%10,3);
        inputNumber = inputNumber/10;
    }
    if(inputNumberPrintableCopy == digitCubeSum){
        std::cout << inputNumberPrintableCopy << " is an Armstrong number.";
    }
    else{
        std::cout << inputNumberPrintableCopy << " is not an Armstrong number.";
    }
}