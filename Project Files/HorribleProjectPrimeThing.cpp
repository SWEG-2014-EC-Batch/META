#include <iostream>
#include <cmath>
#include <iomanip>
bool isPrime(long long int n){
    bool flag = true;
    if (n < 2){
        flag = false;
    }
    else{
        for(int i = 2 ; i <= ceil(sqrt(n)) ; i++){
            if(n%i == 0){
                flag = false;
                break;
            }
        }
    } 
    if(n == 2){
        flag = true;
    }
    return flag;
}
int main(){
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
    if(isPrime(checkedNum)){
        std::cout << checkedNum << " is prime." << std::endl << std::endl;
        for(int i = 1 ; i < checkedNum ; i++){
            if(isPrime(i)){
                primeSum += i;
                primeCounter++;
            }
        }
        if(primeCounter == 0){
            std::cout << "Because there are no prime numbers between 1 and " << checkedNum << ", an average value for them cannot be found.";
        }
        else{
            prePrimeAverage = primeSum/primeCounter;
            std::cout << "The number of primes between 1 and " << checkedNum << " exclusive is " << primeCounter << ", inclusive is " << primeCounter + 1 << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " exclusive is " << std::setprecision(10) << prePrimeAverage << std::endl;
            std::cout << "The ratio of this average with " << checkedNum << " is " << std::setprecision(10) << prePrimeAverage/checkedNumDivisionCopy << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " inclusive is " << std::setprecision(10) << (primeSum+checkedNum)/(primeCounter+1) << std::endl;
        }
    }
    else{
        for (int i = 2 ; i <= checkedNum/2 ; i++){
            if(isPrime(i) && checkedNum%i == 0){
                if(primeFactorCounter == 0){
                    smallestPrimeFactor = i; //because the program goes from the bottom-up, the first prime factor found has to be the smallest
                    std::cout << "The program has found the following prime factor(s): " << std::endl;
                }
                std::cout << i << std::endl;
                primeFactorCounter++;
            }
            if(primeFactorCounter > 0 && i > checkedNum/smallestPrimeFactor){
                    break;
            }
        }
    }
}
