//This C++ program finds and outputs the product of the even digits of a number.
#include <iostream>
int main(){
    int inputNumber;
    int productNumber = 1;
    std::cout << "Enter number whose even digit product to find: ";
    std::cin >> inputNumber;
    int inputNumberPrintCopy = inputNumber; //because we'll be doing math operations that change inputNumber, we'll use a variable to hold its original value to print later.
    while (inputNumber != 0){
        if((inputNumber%10)%2==0){
            productNumber *= inputNumber%10;
        }
        inputNumber = inputNumber/10; //we divide inputNumber by 10 to expose the next digit.
    }
    if(productNumber == 1 && inputNumberPrintCopy != 0){
        std::cout << "No even digits found. Their product is therefore irrelevant.";
    }
    else if(inputNumberPrintCopy == 0){
        std::cout << "The \"product\" of the one even digit of 0 is 0.";
    }
    else{
        std::cout << "The product of the even digits of " << inputNumberPrintCopy << " is " << productNumber << ".";
    }
    return 0;
}
