#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctype.h>
int main(){
    startpoint:
    long long int checkedNum;
    long double primeCounter = 0;
    long double primeSum = 0;
    long double prePrimeAverage = 0;
    long long int smallestPrimeFactor = 0; //there cannot be a prime factor greater than (checkedNum/smallestPrimeFactor)
    long long int primeFactorCounter = 0;
    bool isCheckedNumPrime = true;
    std::cout << "Input number to check primality: ";
    std::cin >> checkedNum;
    long double checkedNumDivisionCopy = checkedNum; //this is a copy of the checkedNum variable used in division operations
    std::cout << std::endl;
        if (checkedNum <= 1 || checkedNum % 2 == 0 || checkedNum % 3 == 0){
            isCheckedNumPrime = false;
        }
        if (checkedNum == 2 || checkedNum == 3){
            isCheckedNumPrime = true;
        }
        for (int i = 5; i * i <= checkedNum; i += 6){
            if (checkedNum % i == 0 || checkedNum % (i + 2) == 0){
                isCheckedNumPrime = false;
            }
        }
    if(checkedNum < 0){
        std::cout << "Error: Invalid value entered." << std::endl;
        goto endchoice;
    }
    if(checkedNum == 0){
        std::cout << "0 is neither prime nor composite." << std::endl;
        goto endchoice;
    }
    if(checkedNum == 1){
        std::cout << "1 is neither prime nor composite, but might be considered prime by some parts of this program you may encountered later." << std::endl;
        goto endchoice;
    }
    if(isCheckedNumPrime){
        std::cout << checkedNum << " is prime." << std::endl << std::endl;
        for(int i = 1 ; i < checkedNum ; i++){
            bool isCheckedNumPredecessorPrime = true;
            if (i <= 1 || i % 2 == 0 || i % 3 == 0){
                isCheckedNumPredecessorPrime = false;
            }
            if (i == 2 || i == 3){
                isCheckedNumPredecessorPrime = true;
            }
            for (int j = 5; j * j <= i; j += 6){
                if (i % j == 0 || i % (j + 2) == 0){
                    isCheckedNumPredecessorPrime = false;
                }
            }
            if(isCheckedNumPredecessorPrime == true){
                primeSum += i;
                primeCounter++;
            }
        }
        if(primeCounter == 0){
            std::cout << "Because there are no prime numbers between 1 and " << checkedNum << ", an average value for them cannot be found.";
        }
        else{
            prePrimeAverage = primeSum/primeCounter;
            std::cout << "The number of primes between 1 and " << checkedNum << " exclusive is " << primeCounter << ", inclusive is " << primeCounter + 1 << ", inclusive of even 1 is " << primeCounter + 2 << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " exclusive is " << std::setprecision(10) << prePrimeAverage << std::endl;
            std::cout << "The ratio of this average with " << checkedNum << " is " << std::setprecision(10) << prePrimeAverage/checkedNumDivisionCopy << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " inclusive is " << std::setprecision(10) << (primeSum+checkedNum)/(primeCounter+1) << std::endl;
        }
    }
    else{
        for (int i = 2 ; i <= checkedNum/2 ; i++){
            bool isCheckedNumFactorPrime = true;
            if (i <= 1 || i % 2 == 0 || i % 3 == 0){
                isCheckedNumFactorPrime = false;
            }
            if (i == 2 || i == 3){
                isCheckedNumFactorPrime = true;
            }
            for (int j = 5; j * j <= i; j += 6){
                if (i % j == 0 || i % (j + 2) == 0){
                    isCheckedNumFactorPrime = false;
                }
            }
            if(isCheckedNumFactorPrime && checkedNum%i == 0){
                if(primeFactorCounter == 0){
                    smallestPrimeFactor = i; //because the program goes from the bottom-up, the first prime factor found has to be the smallest
                    std::cout << "The program has found the following prime factor(s) in addition to [the trivial] 1: " << std::endl << std::endl;
                }
                std::cout << i << std::endl;
                primeFactorCounter++;
            }
            if(primeFactorCounter > 0 && i > checkedNum/smallestPrimeFactor){
                    break;
            }
        }
    }
    std::cout << std::endl;
    endchoice:
    char confirmation = 'n';
    std::cout << "Try again (Y/N)?\n";
    std::cin >> confirmation;
    if(tolower(confirmation) == 'y'){
        goto startpoint;
    }
    else{
        return 0;
    }
}