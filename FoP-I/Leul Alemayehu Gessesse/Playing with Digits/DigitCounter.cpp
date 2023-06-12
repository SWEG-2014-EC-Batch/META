//This C++ program counts the number of digits a number has
#include <iostream>
#include <cmath>
int main(){
    long long int inputNumber;
    std::cout << "Enter integer the number of whose digits to count: ";
    std::cin >> inputNumber;
    //the number of digits a numeral has can be found using the formula floor(log10(inputNumber)+1)
    std::cout << inputNumber << " has " << floor(log10(inputNumber)+1) << " digits.";
    return 0;
}
